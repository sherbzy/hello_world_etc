/*
 * Hello World, etc.
 *
 *  Author: Lauren Sherburne
 *  Date: 08/06/2023
 *  Description: This is just a dummy check to make sure I can use clion its debugger and know
 *  the c++ syntax for some standard things like file input/output, etc.
 *
 */

#include <iostream>
#include "InputOutputPractice.h";
using namespace std;

// function declarations
bool readFileToStdout();
bool printStdinToFile();

int main() {
    cout << "Hello, World!" << endl;

    // practice reading from and writing to files
    cout << "\n\n\n1. Practice reading from and writing to files." << endl;
    InputOutputPractice io;

    // sting practice
    cout << "\n\n\n2. Practice stringy stuff." << endl;

    // return 0 to indicate the program terminated successfully...btw
    return 0;
}