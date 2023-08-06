/*
 * Hello World, etc.
 *
 *  Author: Lauren Sherburne
 *  Date: 08/06/2023
 *  Description: This is just a dummy check to make sure I can use clion its debugger and know
 *  the c++ syntax for some standard things like file input/output, etc.
 *
 *  Note: creating new file in windows cmd is "type nul > filename.txt"
 */
#include <iostream>
#include <fstream>
using namespace std;

// globals
string POWELL_FACTS_FILENAME = "text/powell_facts.txt";

bool readFileToStdout(string filename);

int main() {
    cout << "Hello, World!" << endl;

    // how to read from and write to files
    cout << "\n\n\n1. Practice reading from and writing to files." << endl;
    cout << "Here are some fun facts about Lake Powell: " << endl;
    if (!readFileToStdout(POWELL_FACTS_FILENAME)) {
        cout << "Terminating program...\nGoodbye." << endl;
        return -1;
    }




    // return 0 to indicate the program terminated successfully...btw
    return 0;
}


/*
 * Reading from file:
 *    1. #include <fstream>
 *    2. ifstream/ofstream streamVarName
 *    3. streamVarName.open("filename.txt")
 *    4. check for error = if (streamVarName.fail()) { cout an error message }
 *    5. input stuff
 *    6. streamVarName.close()
 *
 *    Note: file must be in cmake-build-debug
 */

// function used to read from "filename" and output its data to stdout
bool readFileToStdout(string filename) {
    // open file stream
    ifstream input;
    input.open(filename);
    if (input.fail()) {
        cerr << "Failed to open the \"" << filename << "\" file to read." << endl;
        return false;
    }

    // output file contents
    string fact;
    int count = 1;
    while (getline(input, fact)) {  // can also do while (!input.eof())
        cout << "\tFACT " << count << " - " << fact << endl;
        count++;
    }

    cout << "Reached end of file." << endl << endl;
    return true;
}


