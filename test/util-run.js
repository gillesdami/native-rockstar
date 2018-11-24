const fs = require('fs').promises;
const spawn = require('child_process').spawn;

/**
 * Run and interact with a rock compiled program.
 * The function use the rock sources to wrote and check stdin and out.
 * The promise will be rejected if the strings registred by "(!out:<stdout string>)" aren't wrote in stdout, and will wrote the strings registred by "(!in:<stdin string>)" in stdin
 * 
 * @param {string} executablePath 
 * @param {string} rockSrcPath 
 */
const run = async function(executablePath = 'out/bin/result.exe', rockSrcPath) {
    const src = await fs.readFile(rockSrcPath, {encoding: "UTF-8"});

    const strIns = (src.match(/\(!in:.*\)/g) || []).map(s => s.slice(5, -1));
    const strOuts = (src.match(/\(!out:.*\)/g) || []).map(s => s.slice(6, -1));
    const exitCode = Number((src.match(/\!code:(.*)\)/) || [])[1] || 0);

    return new Promise((resolve, reject) => {
        const runner = spawn(`./${executablePath}`);
        let stdoutdata = '';
        let stderrdata = '';

        runner.stdout.on('data', (data) => {stdoutdata += data;});
        runner.stderr.on('data', (data) => {stderrdata += data;});

        runner.on('close', (code) => {
            const stdout = stdoutdata.toString().slice(0, -1);
            const stderr = stderrdata.toString();
            const strOut = strOuts.join("\n");
            
            if(exitCode === 0 && stderr) {
                setTimeout(() =>
                    reject(new Error(stderr)), 0);
            }
            else if(strOut !== stdout) {
                setTimeout(() =>
                    reject(new Error(`stdout contains: "${stdout}" instead of "${strOut}"`), 0));
            }
            else if(code !== exitCode) {
                setTimeout(() =>
                    reject(new Error(`program exited with code: ${code}`)), 0);
            }
            else {
                setTimeout(resolve, 0);
            }
        });

        runner.stdin.setEncoding('utf-8');
        runner.stdout.setEncoding('utf-8');
        runner.stderr.setEncoding('utf-8');

        strIns.forEach(strIn => {
            runner.stdin.write(`${strIn}\n`);
        });
        runner.stdin.end();
    });
};

module.exports = run;