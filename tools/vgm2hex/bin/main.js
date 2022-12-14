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
const channelAllowedA = options.get('channels').includes('A');
const channelAllowedB = options.get('channels').includes('B');
const channelAllowedC = options.get('channels').includes('C');

const registers = {
    0x00: 'Channel A: tone freq  low bits',
    0x01: 'Channel A: tone freq. high bits',
    0x02: 'Channel B: tone freq. low bits',
    0x03: 'Channel B: tone freq. high bits',
    0x04: 'Channel C: tone freq. low bits',
    0x05: 'Channel C: tone freq. high bits',
    0x06: 'Noise frequency',
    0x07: 'Mixer: ',
    0x08: 'Channel A: tone amplitude',
    0x09: 'Channel B: tone amplitude',
    0x0a: 'Channel C: tone amplitude',
    0x0b: 'Envelope period, low bits',
    0x0c: 'Envelope period, high bits',
    0x0d: 'Envelope form',
    0x0e: 'IO port A control',
    0x0f: 'IP port B control',
}

const envForm = {
    0x00: 'single decay then off',
    0x01: 'single decay then off',
    0x02: 'single decay then off',
    0x03: 'single decay then off',
    0x04: 'single attack then off',
    0x05: 'single attack then off',
    0x06: 'single attack then off',
    0x07: 'single attack then off',
    0x08: 'repeated decay',
    0x09: 'single decay then off',
    0x0a: 'repeated decay-attack',
    0x0b: 'single decay then hold',
    0x0c: 'repeated attack',
    0x0d: 'single attack then hold',
    0x0e: 'repeated attack-decay',
    0x0f: 'single attack then off',
};

if (options.get('help') || 0 === options.getInput().length) {
    showUsage();
    process.exit(0);
}

let file = fs.openSync(outfile, 'w');

fs.writeFileSync(file, `#ifndef ${guardPrefix}_H\n`);
fs.writeFileSync(file, `#define ${guardPrefix}_H 1\n`);
options.getInput().forEach(filename => {
    let out = processFile(filename);
    let arrName = path.basename(filename, path.extname(filename));
    fs.writeFileSync(file, `static const unsigned char ${arrName}[] = {\n${out}};\n\n`);
});
fs.writeFileSync(file, `#endif // ${guardPrefix}_H 1\n\n`);


function showUsage() {
    options.info();
}

function toArrayBuffer(b) {
    return b.buffer.slice(b.byteOffset, b.byteOffset + b.byteLength);
}

function notify(cmd, data) {
    if (cmd === 0xff) return 'Stop';
    if ((cmd & 0x80)) return 'Pause ' + (((cmd & 0x0f) + 1) * 50) + 'ms';
    let res = '';
    res += registers[cmd];
    switch (cmd) {
        case 0x07:
            res += ' toneA ' + ((data & 0x01) ? 'off' : 'on') + ', toneB ' + ((data & 0x02) ? 'off' : 'on') + ', toneC ' + ((data & 0x04) ? 'off' : 'on') + ',';
            res += ' noiseA ' + ((data & 0x08) ? 'off' : 'on') + ', noiseB ' + ((data & 0x10) ? 'off' : 'on') + ', noiseC ' + ((data & 0x20) ? 'off' : 'on');
            break;
        case 0x0d:
            res += ' ' + envForm[data];
            break;
        case 0x08:
        case 0x09:
        case 0x0a:
            if (data === 0x0f) res += ' (controlled by envelope)';
            if (data === 0x00) res += ' (muted)';
            break;
    }
    return res;
}

function isCmdAllowedForChannel(cmd) {
    switch (cmd) {
        case 0x00: // Channel A: tone freq  low bits
        case 0x01: // Channel A: tone freq. high bits
        case 0x08: // Channel A: tone amplitude
            return channelAllowedA;

        case 0x02: // Channel B: tone freq. low bits
        case 0x03: // Channel B: tone freq. high bits
        case 0x09: // Channel B: tone amplitude
            return channelAllowedB;

        case 0x04: // Channel C: tone freq. low bits
        case 0x05: // Channel C: tone freq. high bits
        case 0x0a: // Channel C: tone amplitude
            return channelAllowedC;

        default:
            return true;
    }
}

function formatResult(cmd, data) {
    if (cmd === undefined) return '';
    if (!isCmdAllowedForChannel(cmd)) return '';

    let res = '';
    res += '0x' + cmd.toString(16).padStart(2,'0');
    if (data !== undefined) {
        res += ',\t0x' + data.toString(16).padStart(2,'0') + ',';
    } else {
        res += ',\t'
    }
    res += '\t// ' + notify(cmd, data);
    res += '\n';
    return res;
}

function processFile(filename) {
    const buf = fs.readFileSync(filename);
    const vgm = VGM.parse(toArrayBuffer(buf));

    let index = 0;
    let isWaiting = 0;

    let res = '';

    const data = new Uint8Array(vgm.data);

    while (true) {
        try {
            const cmd = parseVGMCommand(data, index);
            // console.log(cmd);
            switch (cmd.constructor) {
                case VGMWriteDataCommand:
                    if (isWaiting > 0) {
                        res += formatResult(0x80 + isWaiting - 1);
                        isWaiting = 0;
                    }
                    res += formatResult(cmd.addr, cmd.data);
                    break
                case VGMWait882Command:
                    isWaiting ++;
                    break
                case VGMEndCommand:
                    res += formatResult(0xff);
                    break
            }
            index += cmd.size;
            if (cmd instanceof VGMEndCommand) break;
        } catch (e) {
            console.error(e);
            break;
        }
    }
    return res;
}
