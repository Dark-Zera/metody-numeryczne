//
// Created by Zera on 3/5/2022.
//

#include "MatrixUtils.h"

void MatrixUtils::makeMatrixTriangular(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne]) {
    double factor;

    for (int column = 0; column < constants::ArraySizeLabOne - 1; column++) {
        for (int row = column + 1; row < constants::ArraySizeLabOne; row++) {
            factor = A[row][column] / A[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySizeLabOne; columnToSubtract++) {
                A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
            }
            b[row] -= b[column] * factor;
        }
    }
}

void MatrixUtils::countLUMatrix(double L[][constants::ArraySizeLabOne], double U[][constants::ArraySizeLabOne]) {
    for (int column = 0; column < constants::ArraySizeLabOne - 1; column++) {
        for (int row = column + 1; row < constants::ArraySizeLabOne; row++) {
            L[row][column] = U[row][column] / U[column][column];

            for (int columnToSubtract = column; columnToSubtract < constants::ArraySizeLabOne; columnToSubtract++) {
                U[row][columnToSubtract] -= U[column][columnToSubtract] * L[row][column];
            }
        }
    }
}

void MatrixUtils::copyMatrixValuesToMatrix(double assignTo[][constants::ArraySizeLabOne], double assignFrom[][constants::ArraySizeLabOne]) {
    for (int column = 0; column < constants::ArraySizeLabOne; column++) {
        for (int row = 0; row < constants::ArraySizeLabOne; row++) {
            assignTo[row][column] = assignFrom[row][column];
        }
    }
}

void MatrixUtils::makeMatrixDiagonal(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne]) {
    double factor;

    for (int column = 0; column < constants::ArraySizeLabOne; column++) {
        for (int row = 0; row < constants::ArraySizeLabOne; row++) {
            if (row != column) {
                factor = A[row][column]/A[column][column];

                for (int columnToSubtract = 0; columnToSubtract < constants::ArraySizeLabOne; columnToSubtract++) {
                    A[row][columnToSubtract] -= A[column][columnToSubtract] * factor;
                }
                b[row] -= b[column] * factor;
            }
        }
    }

    for (int index = 0; index < constants::ArraySizeLabOne; index++) {
        b[index] /= A[index][index];
    }
}

void MatrixUtils::multiplyMatrixByMatrix(double A[][constants::ArraySizeLabOne], double B[][constants::ArraySizeLabOne], double C[][constants::ArraySizeLabOne]) {
    for (int row = 0; row < constants::ArraySizeLabOne; row++) {
        for (int column = 0; column < constants::ArraySizeLabOne; column++) {
//            multiplyVectorByMatrix(A, B[])
        }
    }
}

void MatrixUtils::multiplyVectorByMatrix(double A[][constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne], double c[constants::ArraySizeLabOne]) {
    for (int row = 0; row < constants::ArraySizeLabOne; row++) {
        for (int column = 0; column < constants::ArraySizeLabOne; column++) {
            c[row] += A[row][column] * x[column];
        }
    }
}

void MatrixUtils::makeMatrixIdentical(double A[][constants::ArraySizeLabOne]) {
    for (int row = 0; row < constants::ArraySizeLabOne; row++) {
        for (int column = 0; column < constants::ArraySizeLabOne; column++) {
            A[row][column] = (column == row) ? 1 : 0;
        }
    }
}