//
// Created by Zera on 3/5/2022.
//

#include "MatrixUtils.h"

void MatrixUtils::makeMatrixTriangular(double A[][constants::ArraySize], double b[constants::ArraySize]) {
    double factor;

    for (int column = 0; column < constants::ArraySize - 1; column++) {
        for (int row = column + 1; row < constants::ArraySize; row++) {
            factor = A[row][column] / A[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySize; columnToSubtract++) {
                A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
            }
            b[row] -= b[column] * factor;
        }
    }
}

void MatrixUtils::countLUMatrix(double L[][constants::ArraySize], double U[][constants::ArraySize]) {
    for (int column = 0; column < constants::ArraySize - 1; column++) {
        for (int row = column + 1; row < constants::ArraySize; row++) {
            L[row][column] = U[row][column] / U[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySize; columnToSubtract++) {
                U[row][columnToSubtract] -= U[column][columnToSubtract] * L[row][column];
            }
        }
    }
}

void MatrixUtils::copyMatrixValuesToMatrix(double assignTo[][constants::ArraySize], double assignFrom[][constants::ArraySize]) {
    for (int column = 0; column < constants::ArraySize - 1; column++) {
        for (int row = 0; row < constants::ArraySize; row++) {
            assignTo[row][column] = assignFrom[row][column];
        }
    }
}

void MatrixUtils::makeMatrixDiagonal(double A[][constants::ArraySize], double b[constants::ArraySize]) {
    double factor;

    for (int column = 0; column < constants::ArraySize; column++) {
        for (int row = 0; row < constants::ArraySize; row++) {
            if (row != column) {
                factor = A[row][column]/A[column][column];

                for (int columnToSubtract = 0; columnToSubtract < constants::ArraySize; columnToSubtract++) {
                    A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
                }
                b[row] -= b[column] * factor;
            }
        }
    }

    for (int index = 0; index < constants::ArraySize; index++) {
        b[index] /= A[index][index];
    }
}

void MatrixUtils::multiplyVectorByMatrix(double A[][constants::ArraySize], double x[constants::ArraySize], double c[constants::ArraySize]) {
    for (int row = 0; row < constants::ArraySize; row++) {
        for (int column = 0; column < constants::ArraySize; column++) {
            c[row] += A[row][column] * x[column];
        }
    }
}

void MatrixUtils::makeMatrixIdentical(double A[][constants::ArraySize]) {
    for (int row = 0; row < constants::ArraySize; row++) {
        for (int column = 0; column < constants::ArraySize; column++) {
            A[row][column] = (column == row) ? 1 : 0;
        }
    }
}