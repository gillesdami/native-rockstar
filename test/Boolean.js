const test = require('./util-test');

describe("# Boolean", function() {
    it("> the truthiness is correct", test("test/types/Boolean/truthiness.rock"));

    describe("## comparators", function() {
        it("> equal", test("test/types/Boolean/comparators/equal.rock"));
        it("> greaterThan", test("test/types/Boolean/comparators/greaterThan.rock"));
        it("> greaterThanOrEqual", test("test/types/Boolean/comparators/greaterThanOrEqual.rock"));
        it("> lessThan", test("test/types/Boolean/comparators/lessThan.rock"));
        it("> lessThanOrEqual", test("test/types/Boolean/comparators/lessThanOrEqual.rock"));
    });

    describe("## operators", function() {
        it("> decrement", test("test/types/Boolean/operators/decrement.rock"));
        it("> increment", test("test/types/Boolean/operators/increment.rock"));
        it("> minus", test("test/types/Boolean/operators/minus.rock"));
        it("> over", test("test/types/Boolean/operators/over.rock"));
        it("> plus", test("test/types/Boolean/operators/plus.rock"));
        it("> times", test("test/types/Boolean/operators/times.rock"));
    });
});