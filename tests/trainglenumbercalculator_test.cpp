#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/trianglenumbercalculator.hpp"

TEST_CASE( "Number Calculator Tests" ) {
    TriangleNumberCalculator calc = TriangleNumberCalculator();

    REQUIRE(calc.value(0) == 0);
    REQUIRE(calc.value(4) == 10);
    REQUIRE(calc.add(0,0) == 0);
    REQUIRE(calc.add(1,2) == 4);
    REQUIRE(calc.subtract(0,0) == 0);
    REQUIRE(calc.subtract(2,1) == 2);
    REQUIRE(calc.subtract(1,2) == -2);

}
