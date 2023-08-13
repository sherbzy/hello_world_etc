//
// Created by lkshe on 8/6/2023.
//

#include "stringyPractice.h"

string stringyPractice::reverseStringWordRecurse(string reverse) {
    if (reverse.size() == 0) {  // base case
        return "";
    } else {
        // extract the next word in the string
        string word;
        int i = 0;
        while (i <= (reverse.size() - 1) && reverse[i] != ' ') {
            word += reverse[i];
            i++;
        }

        // get the rest of the string
        string leftoverString;
        if (i >= reverse.size()) {
            leftoverString = "";
        } else {
            leftoverString = reverse.substr(i + 1, reverse.length() - i);
        }
        return reverseStringWordRecurse(leftoverString) + " " + word;   // aaaand recurse
    }
}

// function that reverses the words in a string
void stringyPractice::reverseStringWords(string stringToTest) {
    cout << "\tHere is the initial string: " << stringToTest << endl;

    string reversedString = reverseStringWordRecurse(stringToTest);
    cout << "\tHere is the character reversed string: " << reversedString << endl;

    return;
}




// function that reverses the characters in a string
void stringyPractice::reverseStringChars(string stringToTest) {
    cout << "\tHere is the initial string: " << stringToTest << endl;

    string reversedString = reverseStringCharRecurse(stringToTest);
    cout << "\tHere is the character reversed string: " << reversedString << endl;

    return;
}

// helper string char reverse recursive function
string stringyPractice::reverseStringCharRecurse(string reverse) {
    if (reverse.length() == 0) {    // base case
        return "";
    } else {    // recursive case
        string firstChar = reverse.substr(0, 1);
        string leftoverString = reverse.substr(1, reverse.size() - 1);
        return reverseStringCharRecurse(leftoverString) + firstChar;
    }
}


// constructor
stringyPractice::stringyPractice() {
    cout << "Practice reversing a string's characters." << endl;
    reverseStringChars(test1);

    cout << "Practice reversing a string's words." << endl;
    reverseStringWords(test2);
}
