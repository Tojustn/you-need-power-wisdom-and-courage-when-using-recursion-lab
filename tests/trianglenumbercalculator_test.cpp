#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include <vector>

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

    REQUIRE(calc.multiply(0,0) == 0);
    REQUIRE(calc.multiply(1,2) == 3);
    REQUIRE(calc.multiply(2,3) == 18);
    REQUIRE(calc.multiply(4,4) == 100);

    REQUIRE(calc.divide(0,1) == 0.0);
    REQUIRE(calc.divide(2,1) == 3.0);
    REQUIRE(calc.divide(3,2) == 2.0);
    REQUIRE(calc.divide(4,2) == 3.3333333333333335);

    std::vector<int> seq1 = calc.sequence(1);
    REQUIRE(seq1.size() == 1);
    REQUIRE(seq1[0] == 1);

    std::vector<int> seq4 = calc.sequence(4);
    REQUIRE(seq4.size() == 4);
    REQUIRE(seq4[0] == 1);
    REQUIRE(seq4[1] == 3);
    REQUIRE(seq4[2] == 6);
    REQUIRE(seq4[3] == 10);

    std::vector<int> seq5 = calc.sequence(5);
    REQUIRE(seq5.size() == 5);
    REQUIRE(seq5[0] == 1);
    REQUIRE(seq5[1] == 3);
    REQUIRE(seq5[2] == 6);
    REQUIRE(seq5[3] == 10);
    REQUIRE(seq5[4] == 15);

}
