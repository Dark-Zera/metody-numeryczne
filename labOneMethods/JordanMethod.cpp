//
// Created by Zera on 3/5/2022.
//

#include "JordanMethod.h"
void JordanMethod::jordanMethod(double A[][constants::ArraySize], double b[constants::ArraySize], double x[constants::ArraySize]) {
    MatrixUtils::makeMatrixDiagonal(A,b);
    for (int index = 0; index < constants::ArraySize; index++) {
        x[index] = b[index];
    }
}