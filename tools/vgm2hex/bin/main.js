#!/usr/bin/env node

const options = require('../lib/options');
const fs = require("fs");
const path = require('path');
const {
    VGM,
    VGMWriteDataCommand,
    VGMEndCommand,
    VGMWait882Command,
    VGMWait735Command,
    parseVGMCommand
} = require("vgm-parser");

const guardPrefix = options.get('prefix')
const outfile = options.get('outfile')

if (options.get('help') || 0 === options.getInput().length) {
    showUsage();
    process.exit(0);
}

let file = fs.openSync(outfile, 'w');

fs.writeFileSync(file, `#ifndef ${guardPrefix}_H\n`);
fs.writeFileSync(file, `#define __${guardPrefix}_H 1\n`);
options.getInput().forEach(filename => {
  let out = processFile(filename);
  let arrName = path.basename(filename, path.extname(filename));
  fs.writeFileSync(file, `static const unsigned char ${arrName}[] = {\n${out}\n};\n`);
});
fs.writeFileSync(file, `#endif // ${guardPrefix}_H 1\n\n`);


function toArrayBuffer(b) {
    return b.buffer.slice(b.byteOffset, b.byteOffset + b.byteLength);
}

function processFile(filename) {
  const buf = fs.readFileSync(filename);
  const vgm = VGM.parse(toArrayBuffer(buf));

  let commands = [];
  let index = 0;
  let isWaiting = 0;

  const data = new Uint8Array(vgm.data);

  while (true) {
    try {
        const cmd = parseVGMCommand(data, index);
        // console.log(cmd);
        switch (cmd.constructor) {
            case VGMWriteDataCommand:
                if (isWaiting > 0) {
                    commands.push(0x80 + isWaiting - 1);
                    isWaiting = 0;
                }
                commands.push(cmd.addr);
                commands.push(cmd.data);
                break
            case VGMWait882Command:
                isWaiting ++;
                break
            case VGMEndCommand:
                commands.push(0xff);
                break
        }
        index += cmd.size;
        if (cmd instanceof VGMEndCommand) break;
    } catch (e) {
        console.error(e);
        break;
    }
  }

  return commands
      .map(e => '0x' + e.toString(16).padStart(2,'0'))
      .reduce((a,c,n) => a + ((n % 16 === 0) ? ',\n' : ', ') + c);
}