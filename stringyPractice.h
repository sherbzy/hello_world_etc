//
// Created by lkshe on 8/6/2023.
//

#ifndef HELLO_WORLD_ETC_STRINGYPRACTICE_H
#define HELLO_WORLD_ETC_STRINGYPRACTICE_H

#include <string>
#include <iostream>
using namespace std;


class stringyPractice {
private:
    string test1 = "foobar is cool";
    string test2 = "the quick brown fox jumps over the stream";

    static void reverseStringWords(string stringToTest);
    static string reverseStringWordRecurse(string reverse);
    static void reverseStringChars(string stringToTest);
    static string reverseStringCharRecurse(string reverse);

public:
    stringyPractice();
};


#endif //HELLO_WORLD_ETC_STRINGYPRACTICE_H
