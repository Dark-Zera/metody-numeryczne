//
// Created by Zera on 3/5/2022.
//

#include "MatrixUtils.h"

void MatrixUtils::makeMatrixTriangular(double A[][constants::ArraySizeLabTwo], double b[constants::ArraySizeLabTwo]) {
    double factor;

    for (int column = 0; column < constants::ArraySizeLabTwo - 1; column++) {
        for (int row = column + 1; row < constants::ArraySizeLabTwo; row++) {
            factor = A[row][column] / A[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySizeLabTwo; columnToSubtract++) {
                A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
            }
            b[row] -= b[column] * factor;
        }
    }
}

void MatrixUtils::countLUMatrix(double L[][constants::ArraySizeLabTwo], double U[][constants::ArraySizeLabTwo]) {
    for (int column = 0; column < constants::ArraySizeLabTwo - 1; column++) {
        for (int row = column + 1; row < constants::ArraySizeLabTwo; row++) {
            L[row][column] = U[row][column] / U[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySizeLabTwo; columnToSubtract++) {
                U[row][columnToSubtract] -= U[column][columnToSubtract] * L[row][column];
            }
        }
    }
}

void MatrixUtils::copyMatrixValuesToMatrix(double assignTo[][constants::ArraySizeLabTwo], double assignFrom[][constants::ArraySizeLabTwo]) {
    for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
        for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
            assignTo[row][column] = assignFrom[row][column];
        }
    }
}

void MatrixUtils::makeMatrixDiagonal(double A[][constants::ArraySizeLabTwo], double b[constants::ArraySizeLabTwo]) {
    double factor;

    for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
        for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
            if (row != column) {
                factor = A[row][column]/A[column][column];

                for (int columnToSubtract = 0; columnToSubtract < constants::ArraySizeLabTwo; columnToSubtract++) {
                    A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
                }
                b[row] -= b[column] * factor;
            }
        }
    }

    for (int index = 0; index < constants::ArraySizeLabTwo; index++) {
        b[index] /= A[index][index];
    }
}

void MatrixUtils::multiplyMatrixByMatrix(double A[][constants::ArraySizeLabTwo], double B[][constants::ArraySizeLabTwo], double C[][constants::ArraySizeLabTwo]) {
    for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
        for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
//            multiplyVectorByMatrix(A, B[])
        }
    }
}

void MatrixUtils::multiplyVectorByMatrix(double A[][constants::ArraySizeLabTwo], double x[constants::ArraySizeLabTwo], double c[constants::ArraySizeLabTwo]) {
    for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
        for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
            c[row] += A[row][column] * x[column];
        }
    }
}

void MatrixUtils::makeMatrixIdentical(double A[][constants::ArraySizeLabTwo]) {
    for (int row = 0; row < constants::ArraySizeLabTwo; row++) {
        for (int column = 0; column < constants::ArraySizeLabTwo; column++) {
            A[row][column] = (column == row) ? 1 : 0;
        }
    }
}