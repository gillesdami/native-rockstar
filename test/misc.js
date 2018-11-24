const test = require('./util-test');

describe("# misc language features", function() {
    it("> can read and print text", test("test/io.rock"));
    it("> basic pronoun", test("test/pronouns.rock"));
});

describe("# flow control", function() {
    it("> basic condition", test("test/flowControl/conditionals.rock"));
    it("> basic loop", test("test/flowControl/loops.rock"));
    it("> basic function", test("test/flowControl/functions.rock"));
});

describe("# integration text", function() {
    it("> FizzBuzz", test("test/FizzBuzz.rock"));
})