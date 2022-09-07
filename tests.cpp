#include <iostream>
#include <string>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;

#include "FunctionsLab.cpp"

TEST_CASE("locateSmallest") {
	int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };
	int target = 40;

	CHECK(locateSmallest(myarray, 2, 8) == 4);

	replaceVariable(myarray, target, 3, 7);

	CHECK(myarray[3] == 1000);
	CHECK(myarray[3] == myarray[5]);
	CHECK(myarray[5] != myarray[8]);

	CHECK(sumOdds(myarray, 1, 3) == 78);
    CHECK(sumOdds(myarray, 2, 10) == 96 );
}

TEST_CASE("printArray") {
	int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };
	int target = 40;

    CHECK_NOTHROW(printArray(myarray, 11));
}

TEST_CASE("replaceVariable") {
	int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };
	int target = 40;

	replaceVariable(myarray, target, 3, 7);

	CHECK(myarray[3] == 1000);
	CHECK(myarray[3] == myarray[5]);
	CHECK(myarray[5] != myarray[8]);
}

TEST_CASE("sumOdds") {
	int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };
	int target = 40;

	CHECK(sumOdds(myarray, 1, 3) == 78);
    CHECK(sumOdds(myarray, 2, 10) == 96 );
}

