const spawn = require('child_process').spawn;

/**
 * Compile a rock file using node
 * 
 * @param {string} inputFile path (default to 'out/result.cc')
 * @param {string} outputFile path (default to 'out/bin/result.exe')
 */
const compile = async function(inputFile = 'out/result.cc', outputFile = 'out/bin/result.exe') {
    return new Promise((resolve, reject) => {
        const compiler = spawn('g++', [inputFile, 'out/rock.a', '-o', outputFile, '-std=c++17']);
        let stderr = "";

        compiler.stderr.on('data', (data) => stderr += data);

        compiler.on('close', (code) => {
            if(code) {
                reject(new Error(`Compilation failed with code ${code}
${stderr}`));
            }
            else resolve();
        });
    });
};

module.exports = compile;