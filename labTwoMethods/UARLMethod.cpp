//
// Created by Zera on 3/11/2022.
//

#include "UARLMethod.h"

void UARLMethod::method() {
    double x[constants::ArraySize] = {-2, -1, -0.5, 0.1, 0.3, 1.8};
    double A[constants::ArraySize][constants::ArraySize];

    for (int row = 0; row < constants::ArraySize; row++) {
        for (int column = 0; column < constants::ArraySize; column++) {
            A[row][column] = pow(x[row], column);
        }
    }

    PrintUtils::printMatrix(A);
}