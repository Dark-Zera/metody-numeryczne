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
    static void makeMatrixTriangular(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne]);
    static void countLUMatrix(double L[][constants::ArraySizeLabOne], double U[][constants::ArraySizeLabOne]);
    static void copyMatrixValuesToMatrix(double assignTo[][constants::ArraySizeLabOne], double assignFrom[][constants::ArraySizeLabOne]);
    static void makeMatrixDiagonal(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne]);
    static void makeMatrixIdentical(double A[][constants::ArraySizeLabOne]);
    static void multiplyVectorByMatrix(double A[][constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne], double c[constants::ArraySizeLabOne]);
    static void multiplyMatrixByMatrix(double A[][constants::ArraySizeLabOne], double B[][constants::ArraySizeLabOne], double C[][constants::ArraySizeLabOne]);
};


#endif //MN_LAB1_MATRIXUTILS_H
