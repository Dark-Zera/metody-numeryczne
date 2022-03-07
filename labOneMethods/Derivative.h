//
// Created by Zera on 3/5/2022.
//
#include "iostream"
#include "math.h"
#include "../utils/MatrixUtils.h"
#include "../consts/Constants.h"
#ifndef MN_LAB1_DERATIVE_H
#define MN_LAB1_DERATIVE_H

class Derivative {
public:
    static void derivativeMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]);
};


#endif //MN_LAB1_DERATIVE_H
