//
// Created by Zera on 3/5/2022.
//

#include "../consts/Constants.h"
#include "iostream"
#ifndef MN_LAB1_MATRIXUTILS_H
#define MN_LAB1_MATRIXUTILS_H

class MatrixUtils {
public:
    static void makeMatrixTriangular(float A[][constants::ArraySize], float b[constants::ArraySize]);
    static void makeMatrixDiagonal(float A[][constants::ArraySize], float b[constants::ArraySize]);
    static void multiplyVectorByMatrix(float A[][constants::ArraySize], float x[constants::ArraySize], float multipliedVector[constants::ArraySize]);
};


#endif //MN_LAB1_MATRIXUTILS_H
