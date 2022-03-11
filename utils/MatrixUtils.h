//
// Created by Zera on 3/5/2022.
//

#include "../consts/Constants.h"
#include "PrintUtils.h"
#include "iostream"
#ifndef MN_LAB1_MATRIXUTILS_H
#define MN_LAB1_MATRIXUTILS_H

class MatrixUtils {
public:
    static void makeMatrixTriangular(double A[][constants::ArraySize], double b[constants::ArraySize]);
    static void countLUMatrix(double L[][constants::ArraySize], double U[][constants::ArraySize]);
    static void copyMatrixValuesToMatrix(double assignTo[][constants::ArraySize], double assignFrom[][constants::ArraySize]);
    static void makeMatrixDiagonal(double A[][constants::ArraySize], double b[constants::ArraySize]);
    static void makeMatrixIdentical(double A[][constants::ArraySize]);
    static void multiplyVectorByMatrix(double A[][constants::ArraySize], double x[constants::ArraySize], double c[constants::ArraySize]);
};


#endif //MN_LAB1_MATRIXUTILS_H
