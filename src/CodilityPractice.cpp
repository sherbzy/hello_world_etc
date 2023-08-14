//
// Created by lkshe on 8/6/2023.
//

#include "CodilityPractice.h"

/* Codility demo test instructions
 *  This is a demo task.
 *  Write a function:
 *
 *  class Solution { public int solution(int[] A); }
 *
 *  that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
 *
 *  For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
 *  Given A = [1, 2, 3], the function should return 4.
 *  Given A = [−1, −3], the function should return 1.
 *
 *
 *  Write an efficient algorithm for the following assumptions:
 *  N is an integer within the range [1..100,000];
 *  each element of array A is an integer within the range [−1,000,000..1,000,000].
*/


// Codility demo test - trying to find the smallest missing integer in an array of ints
// The test was timed, so I first tried to solve the problem and get tests passing as soon as possible
int CodilityPractice::firstTryFindSmallestMissingInt(vector<int> A) {
    int smallest = 1;

    while (true) {
        bool loop = false;

        // loop through the array and compare each int to "smallest"
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == smallest) {
                smallest++;
                loop = true;
            }

            // if the number was incremented, break and reloop
            if (loop) {
                break;
            }
        }

        // you've found the smallest one if the loop went through every num in the vec
        if (!loop) {
            break;
        }

    }

    // return the smallest number
    return smallest;
}


// Codility demo test - second try (I wanted to optimize the code if possible since I had a lot of time leftover
int CodilityPractice::secondTryFindSmallestMissingInt(vector<int> B) {
    // sort the array
    sort(B.begin(), B.end());

    // loop through and find the smallest positive int
    int smallest = 1;
    for (int i = 0; i < B.size(); i++) {
        if (B[i] == smallest) {
            smallest++;
        }
    }

    // return the smallest number
    return smallest;
}





/*
 * The following are coding interview questions/tests that I just found on the internet and wanted to try
 *  (https://www.codinginterview.com/spacex-interview-questions)
 */

// Given an array of integers and a value, determine if there are any two integers in the array whose sum is equal
// to the given value.
bool CodilityPractice::sumOfTwoValues(vector<int> vec, int value) {
    bool yesThereAre = false;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] + vec[j] == value) {
                yesThereAre = true;
                break;
            }
        }

        // if you found 2 numbers then break
        if (yesThereAre) { break; }
    }

    // return the bool
    return yesThereAre;
}

// Move all zeros to the left of an array while maintaining its order.






/*
 * Here is where we test alllllll those functions above^
 */
 void CodilityPractice::testAll() {
    cout << endl << endl << "Now let's do some practice function writing:" << endl;
    // test smallestMissingInt codility demo
    cout << "\t1st try smallestMissingInt - now testing..." << endl;
    assert(firstTryFindSmallestMissingInt(vec1) == 5);
    assert(firstTryFindSmallestMissingInt(vec2) == 4);
    assert(firstTryFindSmallestMissingInt(vec3) == 1);
    cout << "\t1st try smallestMissingInt - all tests passed!" << endl << endl;

     cout << "\t2nd try smallestMissingInt - now testing..." << endl;
     assert(secondTryFindSmallestMissingInt(vec1) == 5);
     assert(secondTryFindSmallestMissingInt(vec2) == 4);
     assert(secondTryFindSmallestMissingInt(vec3) == 1);
     cout << "\t2nd try smallestMissingInt - all tests passed!" << endl << endl;

    cout << "\tsumOfTwoValues - now testing..." << endl;
    assert(sumOfTwoValues(vec1, 10));   // my test cases *note: these are too simple*
    assert(!sumOfTwoValues(vec1, 15));
    assert(sumOfTwoValues(vec2, 3));
    assert(!sumOfTwoValues(vec2, 6));
    assert(sumOfTwoValues(vec3, -4));
    assert(!sumOfTwoValues(vec3, 1));
    assert(sumOfTwoValues({ 2, 1, 8, 4, 7, 3 }, 3));    // internet's test cases
    assert(!sumOfTwoValues({ 2, 1, 8, 4, 7, 3 }, 20));
    assert(sumOfTwoValues({ 2, 1, 8, 4, 7, 3 }, 7));
    cout << "\tsumOfTwoValues - all tests passed!" << endl << endl;

    // return when tests are completed
    return;
}
