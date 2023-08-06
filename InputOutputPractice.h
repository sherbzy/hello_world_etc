//
// Created by lkshe on 8/6/2023.
//

#ifndef HELLO_WORLD_ETC_INPUTOUTPUTPRACTICE_H
#define HELLO_WORLD_ETC_INPUTOUTPUTPRACTICE_H

#include <iostream>
#include <fstream>
using namespace std;


class InputOutputPractice {
private:
    // filename vars
    string powell_facts_filename = "text/powell_facts.txt";
    string jokes_filename = "text/list_jokes.txt";

    // private function declarations
    bool readFileToStdout();
    bool printStdinToFile();

public:
    InputOutputPractice();
};


#endif //HELLO_WORLD_ETC_INPUTOUTPUTPRACTICE_H
