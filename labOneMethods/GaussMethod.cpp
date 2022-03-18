//
// Created by Zera on 3/5/2022.
//

#include "GaussMethod.h"

void GaussMethod::gaussMethod(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne]) {
    MatrixUtils::makeMatrixTriangular(A, b);
    for (int row = constants::ArraySizeLabOne - 1; row >= 0; row--) {
        x[row] = b[row];
        for (int column = constants::ArraySizeLabOne - 1; column > row; column--) {
            x[row] -= A[row][column] * x[column];
        }
        x[row] /= A[row][row];
    }
}
