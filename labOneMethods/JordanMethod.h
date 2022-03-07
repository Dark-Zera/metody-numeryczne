//
// Created by Zera on 3/5/2022.
//
#include "../consts/Constants.h"
#include "../utils/MatrixUtils.h"
#include "../utils/PrintUtils.h"
#ifndef MN_LAB1_JORDANMETHOD_H
#define MN_LAB1_JORDANMETHOD_H

class JordanMethod {
public:
    static void jordanMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]);
};


#endif //MN_LAB1_JORDANMETHOD_H
