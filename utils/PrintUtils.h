//
// Created by Zera on 3/5/2022.
//

#include "../consts/Constants.h"
#include "iostream"
#ifndef MN_LAB1_PRINTUTILS_H
#define MN_LAB1_PRINTUTILS_H

using namespace std;

class PrintUtils {
public:
    static void printMatrix(float matrix[][constants::ArraySize], string prefix);
    static void printVector(float vector[constants::ArraySize], string prefix);
};


#endif //MN_LAB1_PRINTUTILS_H
