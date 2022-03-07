//
// Created by Zera on 3/5/2022.
//

#include "JordanMethod.h"
void JordanMethod::jordanMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]) {
    MatrixUtils::makeMatrixDiagonal(A,b);
    for (int index = 0; index < constants::ArraySize; index++) {
        x[index] = b[index];
    }
}