//
// Created by Zera on 3/5/2022.
//

#include "GaussMethod.h"

void GaussMethod::gaussMethod(double A[][constants::ArraySize], double b[constants::ArraySize], double x[constants::ArraySize]) {
    MatrixUtils::makeMatrixTriangular(A, b);
    for (int row = constants::ArraySize - 1; row >= 0; row--) {
        double sum = 0;
        for (int column = constants::ArraySize - 1; column > row; column--) {
            sum += A[row][column] * x[column];
        }
        x[row] = b[row] - sum / A[row][row];
    }
}
