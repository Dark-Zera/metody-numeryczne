//
// Created by Zera on 3/5/2022.
//

#include "Derivative.h"

void Derivative::derivativeMethod(float A[][constants::ArraySize], float b[constants::ArraySize], float x[constants::ArraySize]) {
    float derivative = 0;
    float multipliedVector[constants::ArraySize] = {0,0,0,0,0};
    MatrixUtils::multiplyVectorByMatrix(A, x, multipliedVector);

    for (int index = 0; index < constants::ArraySize; index++) {
        derivative += sqrt(pow(multipliedVector[index] - b[index], 2));
    }
    std::cout << "Derative is equal: " << 0.2 * sqrt(derivative) << std::endl << std::endl;
}