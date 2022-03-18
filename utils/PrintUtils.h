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
    static void printMatrix(double matrix[][constants::ArraySizeLabThree], string prefix = "Matrix");
    static void printVector(double vector[constants::ArraySizeLabThree], string prefix = "Vector");
};


#endif //MN_LAB1_PRINTUTILS_H
