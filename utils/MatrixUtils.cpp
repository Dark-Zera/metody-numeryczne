//
// Created by Zera on 3/5/2022.
//

#include "MatrixUtils.h"

void MatrixUtils::makeMatrixTriangular(double A[][constants::ArraySize], double b[constants::ArraySize]) {
    double factor;

    for (int column = 0; column < constants::ArraySize; column++) {
        for (int row = column + 1; row < constants::ArraySize; row++) {
            factor = A[row][column] / A[column][column];
            b[row] -= b[column] * factor;
            for (int columnToSubtract = column; columnToSubtract < constants::ArraySize; columnToSubtract++) {
                A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
            }
        }
    }
}

void MatrixUtils::makeMatrixDiagonal(double A[][constants::ArraySize], double b[constants::ArraySize]) {
    double factor;

    for (int column = 0; column < constants::ArraySize; column++) {
        factor = A[column][column];
        for (int columnToSubtract = column; columnToSubtract < constants::ArraySize; columnToSubtract++) {
            A[column][columnToSubtract] /= factor;
            b[column] /= factor;
        }
        for (int row = 0; row < constants::ArraySize; row++) {
            if (row != column) {
                factor = A[row][column];
                b[row] -= b[column] * factor;
                for (int columnToSubtract = column; columnToSubtract < constants::ArraySize; columnToSubtract++) {
                    A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
                }
            }
        }
    }

}

void MatrixUtils::multiplyVectorByMatrix(double A[][constants::ArraySize], double x[constants::ArraySize], double c[constants::ArraySize]) {
    for (int row = 0; row < constants::ArraySize; row++) {
        for (int column = 0; column < constants::ArraySize; column++) {
            c[row] += A[row][column] * x[column];
        }
    }
}