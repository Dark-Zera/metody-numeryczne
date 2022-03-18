//
// Created by Zera on 3/5/2022.
//

#include "JordanMethod.h"
void JordanMethod::jordanMethod(double A[][constants::ArraySizeLabOne], double b[constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne]) {
    MatrixUtils::makeMatrixDiagonal(A,b);
    for (int index = 0; index < constants::ArraySizeLabOne; index++) {
        x[index] = b[index];
    }
}