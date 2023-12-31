/*
 * Hello World, etc.
 *
 *  Author: Lauren Sherburne
 *  Date: 08/06/2023
 *  Description: This is just a dummy check to make sure I can use clion its debugger and know
 *  the c++ syntax for some standard things like file input/output, string manipulation etc.
 *
 */

#include <iostream>
#include "InputOutputPractice.h"
#include "stringyPractice.h"
#include "CodilityPractice.h"
#include <cassert>
using namespace std;

// function declarations
bool readFileToStdout();
bool printStdinToFile();

int main() {
    cout << "Hello, World!" << endl;

    // testing assert statement
    assert(5 * 2 == 10);

    // practice reading from and writing to files
    cout << "\n\n\n1. Practice reading from and writing to files." << endl;
    InputOutputPractice();

    // sting manipulation practice
    cout << "\n\n\n2. Practice stringy stuff." << endl;
    stringyPractice();

    // codility practice
    CodilityPractice codilityPractice;
    codilityPractice.testAll();



    // return 0 to indicate the program terminated successfully...btw
    return 0;
}