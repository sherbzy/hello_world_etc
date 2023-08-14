//
// Created by lkshe on 8/13/2023.
//


#include "catch2/catch_all.hpp"
#include <iostream>
using namespace std;

// multiplies the two parameter ints, returns an int
int mult(int num1, int num2) {
    return num1 * num2;
}

// dummy test hello world thing
TEST_CASE("Dummy Test A", "[hello_world]") {
    REQUIRE( 1 == 1);
    REQUIRE( 1 != 0);
    REQUIRE( 5 < 12);
    cout << "---------- Dummy Test A, Completed ----------" << endl;
}

// dummy tests to make sure testing a func works
TEST_CASE("Dummy Test B", "[mult]") {
    REQUIRE( mult(5, 2) == 10);
    REQUIRE( mult(8, 8) == 64);
    REQUIRE( mult(10, 10) != 14);
    cout << "---------- Dummy Test B, Completed ----------" << endl;
}

int main(int argc, char* const argv[]) {
    cout << "Running test_helloWorld.cpp tests:" << endl;
    return Catch::Session().run(argc, argv);
}





