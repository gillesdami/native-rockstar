const test = require('./util-test');

describe("# Number", function() {
    it("> the truthiness is correct", test("test/types/Number/truthiness.rock"));

    describe("## comparators", function() {
        it("> equal", test("test/types/Number/comparators/equal.rock"));
        it("> greaterThan", test("test/types/Number/comparators/greaterThan.rock"));
        it("> greaterThanOrEqual", test("test/types/Number/comparators/greaterThanOrEqual.rock"));
        it("> lessThan", test("test/types/Number/comparators/lessThan.rock"));
        it("> lessThanOrEqual", test("test/types/Number/comparators/lessThanOrEqual.rock"));
    });

    describe("## operators", function() {
        it("> decrement", test("test/types/Number/operators/decrement.rock"));
        it("> increment", test("test/types/Number/operators/increment.rock"));
        it("> minus", test("test/types/Number/operators/minus.rock"));
        it("> over", test("test/types/Number/operators/over.rock"));
        it("> plus", test("test/types/Number/operators/plus.rock"));
        it("> times", test("test/types/Number/operators/times.rock"));
    });
});