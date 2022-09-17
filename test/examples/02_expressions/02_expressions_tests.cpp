#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test operator precedence without parenthesis")
{
	REQUIRE(operator_precedence_1(2, 6, 3) == 4); 
}