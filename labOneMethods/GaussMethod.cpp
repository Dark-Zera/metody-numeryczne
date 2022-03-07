//
// Created by Zera on 3/5/2022.
//

#include "GaussMethod.h"

void GaussMethod::gaussMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]) {
    MatrixUtils::makeMatrixTriangular(A, b);
    for (int row = constants::ArraySize - 1; row >= 0; row--) {
        for (int column = constants::ArraySize - 1; column > row; column--) {
            b[row] -= A[row][column] * x[column];
        }
        x[row] = b[row] / A[row][row];
    }
}
