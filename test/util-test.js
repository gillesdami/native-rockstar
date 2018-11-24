const transpile = require('../index');
const compile = require('./util-compile');
const run = require('./util-run');

module.exports = (inputFile) => async () => {
    await transpile(inputFile, './out/result.cc');
    await compile();
    await run(undefined, inputFile);
};