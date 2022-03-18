//
// Created by Zera on 3/11/2022.
//

#include "UARLMethod.h"

void UARLMethod::method() {
//    double x[constants::ArraySizeLabTwo] = {-2, -1, -0.5, 0.1, 0.3, 1.8};
//    double c[constants::ArraySizeLabTwo] = {1, -0.5, 1, 1.5, -2, -0.5};
//    double A[constants::ArraySizeLabTwo][constants::ArraySizeLabTwo];
//    for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
//        for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
//            A[row][column] = pow(x[row], column);
//        }
//    }
//
//    double y[constants::ArraySizeLabTwo];
//    MatrixUtils::multiplyVectorByMatrix(A, c, y);
//
//    double L[constants::ArraySizeLabTwo][constants::ArraySizeLabTwo];
//    MatrixUtils::makeMatrixIdentical(L);
//
//    double U[constants::ArraySizeLabTwo][constants::ArraySizeLabTwo];
//    MatrixUtils::copyMatrixValuesToMatrix(U, A);
//    MatrixUtils::countLUMatrix(L, U);
//
//    double z[constants::ArraySizeLabTwo];
//    for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
//        z[row] = y[row];
//        for (int column = 0; column < row; column++) {
//            z[row] -= L[row][column] * z[column];
//        }
//    }
//
//    double resultC[constants::ArraySizeLabTwo];
//    for (int row = constants::ArraySizeLabTwo - 1; row >= 0; row--) {
//        resultC[row] = z[row] / U[row][row];
//        for (int column = constants::ArraySizeLabTwo - 1; column > row; column--) {
//            resultC[row] -= (U[row][column] * resultC[column])/ U[row][row];
//        }
//    }
//
//    PrintUtils::printVector(c, "Original c");
//    PrintUtils::printVector(resultC, "Second c");
}