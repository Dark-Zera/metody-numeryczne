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
    static void printMatrix(double matrix[][constants::ArraySizeLabTwo], string prefix = "Matrix");
    static void printVector(double vector[constants::ArraySizeLabTwo], string prefix = "Vector");
};


#endif //MN_LAB1_PRINTUTILS_H
