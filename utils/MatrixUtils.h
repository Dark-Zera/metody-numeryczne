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
    static void makeMatrixTriangular(double A[][constants::ArraySizeLabTwo], double b[constants::ArraySizeLabTwo]);
    static void countLUMatrix(double L[][constants::ArraySizeLabTwo], double U[][constants::ArraySizeLabTwo]);
    static void copyMatrixValuesToMatrix(double assignTo[][constants::ArraySizeLabTwo], double assignFrom[][constants::ArraySizeLabTwo]);
    static void makeMatrixDiagonal(double A[][constants::ArraySizeLabTwo], double b[constants::ArraySizeLabTwo]);
    static void makeMatrixIdentical(double A[][constants::ArraySizeLabTwo]);
    static void multiplyVectorByMatrix(double A[][constants::ArraySizeLabTwo], double x[constants::ArraySizeLabTwo], double c[constants::ArraySizeLabTwo]);
    static void multiplyMatrixByMatrix(double A[][constants::ArraySizeLabTwo], double B[][constants::ArraySizeLabTwo], double C[][constants::ArraySizeLabTwo]);
};


#endif //MN_LAB1_MATRIXUTILS_H
