//
// Created by lkshe on 8/6/2023.
//

#include "InputOutputPractice.h"

// function used to read from "filename" and output its data to stdout
bool InputOutputPractice::readFileToStdout() {
    cout << "Practice file input and stdout" << endl;
    cout << "\tHere are some fun facts about Lake Powell: " << endl;

    // open file stream
    ifstream input;
    input.open(powell_facts_filename, ofstream::out | ofstream::app);
    if (input.fail()) {
        cerr << "Failed to open the \"" << powell_facts_filename << "\" file to read." << endl;
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
bool InputOutputPractice::printStdinToFile() {
    cout << "Practice file output and stdin" << endl;
    cout << "\tTell me your favorite joke and I will add it to my list of jokes! Press enter when done..." << endl;
    cout << "\tUncomment in InputOutputPractice to not skip this section." << endl;
    /* string user_joke;
    getline(cin, user_joke);

    ofstream output;
    output.open(jokes_filename, ios::app);
    if (output.fail()) {
        cerr << "Failed to open the \"" << jokes_filename << "\" file to write." << endl;
        return false;
    }

    output << user_joke << endl;
    output.close(); */
    cout << "\tThanks! Your joke has been added!" << endl;
    return true;
}


// constructor
InputOutputPractice::InputOutputPractice() {
    if (!readFileToStdout()) {
        cout << "FAIL, but continuing to file output...\n" << endl;
    }

    if (!printStdinToFile()) {
        cout << "FAIL, but continuing to next practice...\n" << endl;
    }
}



