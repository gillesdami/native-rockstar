const test = require('./util-test');

describe("# Mysterious", function() {
    it("> the truthiness is correct", test("test/types/Mysterious/truthiness.rock"));

    describe("## comparators", function() {
        it("> equal", test("test/types/Mysterious/comparators/equal.rock"));
        it("> greaterThan", test("test/types/Mysterious/comparators/greaterThan.rock"));
        it("> greaterThanOrEqual", test("test/types/Mysterious/comparators/greaterThanOrEqual.rock"));
        it("> lessThan", test("test/types/Mysterious/comparators/lessThan.rock"));
        it("> lessThanOrEqual", test("test/types/Mysterious/comparators/lessThanOrEqual.rock"));
    });

    describe("## operators", function() {
        it("> decrement", test("test/types/Mysterious/operators/decrement.rock"));
        it("> increment", test("test/types/Mysterious/operators/increment.rock"));
        it("> minus", test("test/types/Mysterious/operators/minus.rock"));
        it("> over", test("test/types/Mysterious/operators/over.rock"));
        it("> plus", test("test/types/Mysterious/operators/plus.rock"));
        it("> times", test("test/types/Mysterious/operators/times.rock"));
    });
});