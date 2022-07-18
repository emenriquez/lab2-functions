#include <iostream> // Used for cin and cout
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.



//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value

//****************To Do********************
int locateSmallest(int array[], int start, int end){

}



//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output
// input : an array of int, the target value we are searching for, an int which is the starting index of search, an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000

//****************To Do********************




//write a function called printArray to print out the elements of the given array
//output: void
//input: the array of integers and its size
//****************To Do********************








//Write the function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.

//****************To Do********************
int sumOdds(int array[], int start, int end){

}


TEST_CASE("function tests", "[tests]") {
	int myarray[] = { 16,3,77,40,20,40,44,52,40,90 };
	int target = 40;

	REQUIRE(locateSmallest(myarray, 2, 8) == 4);

	replaceVariable(myarray, target, 3, 7);

	REQUIRE(myarray[3] == 1000);
	REQUIRE(myarray[3] == myarray[5]);
	REQUIRE(myarray[5] != myarray[8]);

	REQUIRE(sumOdds(myarray, 1, 10) == 80);

}