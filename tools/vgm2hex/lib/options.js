const minimist = require('minimist')

const options = [
    {
        description: 'out file',
        long: 'outfile',
        short: 'o',
        default: 'music.h'
    },
    {
        description: 'guard prefix',
        long: 'prefix',
        short: 'p',
        default: '__MUSIC'
    },
    {
        description: 'allowed channels',
        long: 'channels',
        short: 'c',
        default: 'ABC'
    },
    {
        description: 'print usage information',
        long: 'help',
        short: '?',
        default: false
    }
]

const argv = minimist(process.argv.slice(2), {
    string: options
        .filter(o => (o.default !== true && o.default !== false))
        .map(o => (o.long)),
    boolean: options
        .filter(o => (o.default === true || o.default === false))
        .map(o => (o.long)),
    alias: options.reduce((map, o) => {
        map[o.short] = o.long;
        return map;
    }, {}),
    default: options.reduce((map, o) => {
        map[o.short] = o.default;
        return map;
    }, {})
})

class Options {
    constructor() {
        this.options = options;
    }

    get(opt) {
        return argv[opt];
    }

    getInput() {
        return argv['_'];
    }

    info() {
        console.log('Options:')
        options.forEach(option => {
            console.log(`\t-${option.short.padEnd(2)}| --${option.long.padEnd(20)}\t${option.description} [${option.default}]`);
        })
    }
}

module.exports = new Options();