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

        // return the smallest number
        return smallest;
    }
}


// Codility demo test - second try
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
 *     class Solution {}
        Example test:   [1, 3, 6, 4, 1, 2]
        OK

                Example test:   [1, 2, 3]
        OK

                Example test:   [-1, -3]
        OK
 */
