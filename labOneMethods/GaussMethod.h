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
    static void gaussMethod(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne]);
};


#endif //MN_LAB1_GAUSSMETHOD_H
