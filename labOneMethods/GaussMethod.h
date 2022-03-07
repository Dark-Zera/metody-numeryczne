//
// Created by Zera on 3/5/2022.
//
#include "../consts/Constants.h"
#include "../utils/MatrixUtils.h"
#include "../utils/PrintUtils.h"
#ifndef MN_LAB1_GAUSSMETHOD_H
#define MN_LAB1_GAUSSMETHOD_H

class GaussMethod {
public:
    static void gaussMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]);
};


#endif //MN_LAB1_GAUSSMETHOD_H
