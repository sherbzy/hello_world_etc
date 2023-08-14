//
// Created by lkshe on 8/6/2023.
//

#ifndef HELLO_WORLD_ETC_CODILITYPRACTICE_H
#define HELLO_WORLD_ETC_CODILITYPRACTICE_H

#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <cassert>
using namespace std;

class CodilityPractice {
private:
    // vectors for testing smallestMissingInt
    vector<int> vec1 = { 1, 3, 6, 4, 1, 2 };
    vector<int> vec2 = { 1, 2, 3 };
    vector<int> vec3 = { -1, -3 };

    // function definitions
    int firstTryFindSmallestMissingInt(vector<int> A);
    int secondTryFindSmallestMissingInt(vector<int> B);
    bool sumOfTwoValues(vector<int> vec, int value);
public:
    void testAll();
};


#endif //HELLO_WORLD_ETC_CODILITYPRACTICE_H
