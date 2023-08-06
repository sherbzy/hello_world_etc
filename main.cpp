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
#include <fstream>
using namespace std;

// globals
string POWELL_FACTS_FILENAME = "text/powell_facts.txt";
string JOKES_FILENAME = "text/list_jokes.txt";

// function declarations
bool readFileToStdout();
bool printStdinToFile();

int main() {
    cout << "Hello, World!" << endl;

    // read from file and output to stdout
    cout << "\n\n\n1. Practice reading from and writing to files." << endl;
    if (!readFileToStdout()) {
        cout << "Terminating program...\nGoodbye." << endl;
        return -1;
    }

    // read from stdin and output to file
    if (!printStdinToFile()) {
        cout << "Terminating program...\nGoodbye." << endl;
        return -1;
    }


    // return 0 to indicate the program terminated successfully...btw
    return 0;
}






// function used to read from "filename" and output its data to stdout
bool readFileToStdout() {
    cout << "Here are some fun facts about Lake Powell: " << endl;

    // open file stream
    ifstream input;
    input.open(POWELL_FACTS_FILENAME, ofstream::out | ofstream::app);
    if (input.fail()) {
        cerr << "Failed to open the \"" << POWELL_FACTS_FILENAME << "\" file to read." << endl;
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


// function that asks for user input and writes it to a file
bool printStdinToFile() {
    cout << "\nTell me your favorite joke and I will add it to my list of jokes! Press enter when done..." << endl;
    string user_joke;
    getline(cin, user_joke);

    ofstream output;
    output.open(JOKES_FILENAME);
    if (output.fail()) {
        cerr << "Failed to open the \"" << JOKES_FILENAME << "\" file to write." << endl;
        return false;
    }

    output << user_joke;
    output.close();
    cout << "Thanks! Your joke has been added!" << endl;
    return true;
}


