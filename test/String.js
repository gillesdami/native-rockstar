const test = require('./util-test');

describe("# String", function() {
    it("> the truthiness is correct", test("test/types/String/truthiness.rock"));

    describe("## comparators", function() {
        it("> equal", test("test/types/String/comparators/equal.rock"));
        it("> greaterThan", test("test/types/String/comparators/greaterThan.rock"));
        it("> greaterThanOrEqual", test("test/types/String/comparators/greaterThanOrEqual.rock"));
        it("> lessThan", test("test/types/String/comparators/lessThan.rock"));
        it("> lessThanOrEqual", test("test/types/String/comparators/lessThanOrEqual.rock"));
    });

    describe("## operators", function() {
        it("> decrement", test("test/types/String/operators/decrement.rock"));
        it("> increment", test("test/types/String/operators/increment.rock"));
        it("> minus", test("test/types/String/operators/minus.rock"));
        it("> over", test("test/types/String/operators/over.rock"));
        it("> plus", test("test/types/String/operators/plus.rock"));
        it("> times", test("test/types/String/operators/times.rock"));
    });
});