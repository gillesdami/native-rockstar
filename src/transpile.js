/**
 * Peg parsed rockstar to C++ with rock-cpp lib translation
 */
class TranspilationError extends Error {
    constructor(statement, error) {
        super(`TranspilationError: '${JSON.stringify(statement)}' transpilation failed with message: ${error.message}`);
    }
}

let translations;

const transpile = (statements) => {
    if(!Array.isArray(statements)) statements = [statements];
    
    return statements.map(statement => {
        try {
            return translations[statement.t](statement);
        } catch(e) {
            if(!(e instanceof TranspilationError)) throw new TranspilationError(statement, e);
            else throw e;
        }
    }).join('');
};

const hashCode = function(s){
    return Math.abs(s.split("").reduce(function(a,b){a=((a<<5)-a)+b.charCodeAt(0);return a&a},0));              
}

translations = {
    "Block": ({s}) => `${transpile(s)}};\n`,
    "FunctionDeclaration": ({n, a}) => `auto fn_${hashCode(n.n)} = [&vars](${a.map((v, i) => `Var _${i}`).join(",")}) -> Var {
${a.map((v, i) => `(vars>"${v}")=_${i}`).join(";")};\n`,
    "FunctionCall": ({f,a}) => `fn_${hashCode(f.n)}(${a.map(a => transpile(a)).join(",")})\n`,
    "Loop": ({c, e}) => `while(${c === "Until" ? "!" : ""}toBool(${transpile(e)})) {\n`,
    "Continue": () =>"continue;\n",
    "Break": () => "break;\n",
    "If": ({e}) => `if(toBool(${transpile(e)})) {\n`,
    "Else": () => `\n} else {\n`,
    "Comparison": ({l, r, b, c}) => `${transpile(l)}${c ? {gt: '>', lt: '<', ge: '>=', le: '<='}[c] : b ? "==" : "!="}${transpile(r)}`,
    "BooleanOperation": ({l, b, r}) => `${transpile(l)}${b==='and'?'&&':'||'}${transpile(r)}`,
    "Variable": ({n}) => `(vars>"${n}")`,
    "Pronoun": () => `(vars>lastVarName)`,
    "Rement": ({v, o}) => `${translations.Variable(v)}${o};\n`,
    "Arithmetic": ({l, o, r}) => `${transpile(l)}${o}${transpile(r)};\n`,
    "Set": ({v, e}) => `${translations.Variable(v)}=${transpile(e)};\n`,
    "Literal": ({v}) => 
        typeof v === "boolean" ? `Boolean(${v})` : 
        v === null ? `Null()` :
        v === undefined ? `Mysterious()` :
        typeof v === "string" ? `String("${v}")` :
        `Number(${v})`,
    "GiveBack": ({e}) => `return ${translations.Variable(e)};\n`,
    "Say": ({e}) => `say(${transpile(e)});\n`,
    "Listen": ({v}) => `listen(${translations.Variable(v)});\n`,

    //internal
    "Program": ({e}) => `#include <iostream>
#include "../src/rock-cpp/rock.h"

using namespace rock;

int main() 
{
    try {
        Vars vars;
        ${transpile(e)}
    } catch (const std::invalid_argument& e) {
        std::cerr << "Uncaught exception: invalid_argument: " << e.what() << std::endl;
        exit(1);
    } catch (const std::exception& e) {
        std::cerr << "Uncaught exception: " << e.what() << std::endl;
        exit(1);
    }

    return 0;
}`
};

module.exports = {transpile, TranspilationError};