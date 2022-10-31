/*
 * videogame-format.js
 *
 * This extension adds the 'videogame map format' type to the Export As menu,
 * which can be used to generate matrix maps as used by the Scene.build()
 * method from the videogame library (https://github.com/diogoeichert/videogame)
 */

/* global tiled, FileInfo, TextFile */

function findSubarray(big, small) {
	if (small.length === 0) return -1;
	for (let i = 0; i < big.length - small.length + 1; i++) {
		let found = true;
		for (let j = 0; j < small.length; j++) {
			let obj1 = big[i + j];
			let obj2 = small[j];
			if (obj1.pos !== obj2.pos || obj1.cell !== obj2.cell) found = false;
		}
		if (found === true) return i;
	}
	return -1;
}

function basename(path) {
	return path.split('/').pop();
}

function parse(line, map, extras, chars, y) {

	let lastCell = line[0];
	let count = 0;
	let start = 0;

	let extraPointer = extras.length;

	const groups = [];

	let mapElement = {leftWall: 0, rightWall: 0, extraPointer: 0};

	for (let x = 0; x < 16; x++) {
		let cell = line[x];
		if (cell >= 16) cell = 0;
		if (cell !== lastCell) {
			groups.push({start, cell: lastCell, count});
			count = 1;
			lastCell = cell;
			start = x;
		} else {
			count++;
		}
	}
	groups.push({start, cell: lastCell, count: count});

	// console.log('Groups:', groups);

	let walls = groups.filter(group => (group.cell === 1))

	// console.log('Walls: ', walls);

	switch (walls.length) {
		case 0:
			// console.log('No walls found.');
			mapElement.leftWall = 0;
			mapElement.rightWall = 15; // add fake walls
			break
		case 1:
			let wall = walls[0];
			let leftGap = wall.start;
			let rightGap = 16 - (wall.start + wall.count - 1);
			if (leftGap < rightGap) {
				// console.log('Wall on the left');
				mapElement.leftWall = (wall.start + wall.count) & 0x0f;
				mapElement.rightWall = 0;
			} else {
				// console.log('Wall on the right');
				mapElement.leftWall = 0;
				mapElement.rightWall = wall.start & 0x0f;
			}
			break
		case 2:
		default:
			let leftWall = walls[0];
			let rightWall = walls[walls.length - 1];
			// console.log('Two walls found.');
			mapElement.leftWall = leftWall.start + leftWall.count - 1;
			mapElement.rightWall = rightWall.start;
			break
	}


	let restoredLine;
	let extraLine = [];
	for (let x = 0; x < 16; x++) {
		if (x <= mapElement.leftWall) restoredLine = 1;
		else if (x >= mapElement.rightWall) restoredLine = 1;
		else restoredLine = 0;
		// console.log(restoredLine, line[x]);
		if (restoredLine != line[x]) {
		        if (line[x] < 16) {
				extraLine.push({pos: x, cell: line[x]});
			} else {
				chars.push({x: x, y: y, e: (Number(line[x]) & 0x0f)});
			}
		}
	}

	extraLine.push({pos: 0, cell: 0}); // terminator
	mapElement.extraPointer = extraLine;
	map.push(mapElement);
}

tiled.registerMapFormat("videogame", {
	name: "videogame map format",
	extension: "h",

	write: (map, fileName) => {

		const prefix = map.property("prefix");

		for (let i = 0; i < map.layerCount; ++i) {
			const layer = map.layerAt(i);

			if (!layer.isTileLayer) {
				continue;
			}

			const extras = [];
			const chars = [];
			const mmap = [];

			var file = new TextFile(fileName, TextFile.WriteOnly);

			for (let y = 0; y < layer.height; ++y) {
				const line = [];
				for (let x = 0; x < layer.width; ++x) {

					const tile = layer.tileAt(x, y);
					let id = tile.property('id');

					line.push(id);
				}
				parse(line, mmap, extras, chars, y);
			}

			mmap.forEach(m => {
				let pos = findSubarray(extras, m.extraPointer);
				if (pos >= 0) {
					m.extraPointer = pos;
				} else {
					let extraPointer = extras.length;
					extras.push(...m.extraPointer);
					m.extraPointer = extraPointer;
				}
			});

			const bn = basename(fileName).replace(/\./g, '_').toUpperCase();

			file.writeLine(`#ifndef __${bn}`);
			file.writeLine(`#define __${bn} 1`);
			file.writeLine(`#define ${prefix.toUpperCase()}_MAP_SIZE ${layer.height}`);
			file.writeLine('');
			if (mmap.length > 0) {
				let mapOut = mmap
					.map(e => ('{.b = 0x' +
						e.leftWall.toString(16) + e.rightWall.toString(16) + ', .o = 0x' +
						e.extraPointer.toString(16).padStart(4,'0') + '}') )
					.reduce((a,c,n) => a + ((n % 4 === 0) ? ',\n' : ', ') + c);
				file.writeLine(`static const map_struct_t ${prefix}[${prefix.toUpperCase()}_MAP_SIZE] = {\n${mapOut}\n};`);
				file.writeLine('');
			}
			if (chars.length > 0) {
				let charsOut = chars
					.map(e => ('{.e = 0x' +
						e.e.toString(16) + e.x.toString(16) + ', .p = 0x' +
						e.y.toString(16).padStart(4,'0') + '}') )
					.reduce((a,c,n) => a + ((n % 4 === 0) ? ',\n' : ', ') + c);
				file.writeLine(`static const char_struct_t ${prefix}_chars[] = {\n${charsOut}\n};`);
				file.writeLine('');
			}
			if (extras.length > 0) {
				let extrasOut = extras
					.map(e => '0x' + e.pos.toString(16) + e.cell.toString(16))
					.reduce((a,c) => a+((a.endsWith('0x00'))?',\n':', ')+c);
				file.writeLine(`static const unsigned char ${prefix}_objects[] = {\n${extrasOut}\n};`);
			}
			file.writeLine(`#endif // __${bn} 1`);
			file.writeLine(``);

			file.commit();
		}
	},
});
