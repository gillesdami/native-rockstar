const test = require('./util-test');

describe("# Null", function() {
    it("> the truthiness is correct", test("test/types/Null/truthiness.rock"));

    describe("## comparators", function() {
        it("> equal", test("test/types/Null/comparators/equal.rock"));
        it("> greaterThan", test("test/types/Null/comparators/greaterThan.rock"));
        it("> greaterThanOrEqual", test("test/types/Null/comparators/greaterThanOrEqual.rock"));
        it("> lessThan", test("test/types/Null/comparators/lessThan.rock"));
        it("> lessThanOrEqual", test("test/types/Null/comparators/lessThanOrEqual.rock"));
    });

    describe("## operators", function() {
        it("> decrement", test("test/types/Null/operators/decrement.rock"));
        it("> increment", test("test/types/Null/operators/increment.rock"));
        it("> minus", test("test/types/Null/operators/minus.rock"));
        it("> over", test("test/types/Null/operators/over.rock"));
        it("> plus", test("test/types/Null/operators/plus.rock"));
        it("> times", test("test/types/Null/operators/times.rock"));
    });
});