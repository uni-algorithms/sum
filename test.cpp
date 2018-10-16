#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "sum.cpp"

TEST_CASE("2 + 3") {
    std::istringstream in("2 3");
    REQUIRE(sum(in) == 5);
}

TEST_CASE("5 + -7") {
    std::istringstream in("5 -7");
    REQUIRE(sum(in) == -2);
}