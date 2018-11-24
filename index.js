const parser = require('./rockstar-parser');
const Tracer = require('pegjs-backtrace');
const fs = require('fs').promises;

const { transpile } = require('./src/transpile');
const groupBlock = require('./src/groupBlock');

process.on('unhandledRejection', up => { throw up });

/**
 * Transpile a rock file into a c++ file
 * 
 * @param {string} inputFile path to the input rock file
 * @param {string} outputFile path to the output c++ file (default to './out/result.cc')
 * @param {string} parsedOutputFile optional path to the output parsed txt file (default to './out/parsed.txt')
 */
const main = async function(inputFile, outputFile = './out/result.cc', parsedOutputFile = './out/parsed.txt') {

    const input = await fs.readFile(inputFile, {encoding: 'UTF-8'});
    const tracer = new Tracer(input);
    let parsed;

    try {
        parsed = {t: "Program", e: groupBlock(parser.parse(input, {tracer}))};
    } catch {
        throw new Error(tracer.getBacktraceString());
    }
    
    if(parsedOutputFile) {
        await fs.writeFile(parsedOutputFile, JSON.stringify(parsed));
    }
    
    const result = transpile(parsed);
    await fs.writeFile(outputFile, result);
}

if (require.main === module) {
    main(process.argv[2], process.argv[3], process.argv[4]);
} else {
    module.exports = main;
}