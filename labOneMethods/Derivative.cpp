//
// Created by Zera on 3/5/2022.
//

#include "Derivative.h"

void Derivative::derivativeMethod(double constA[][constants::ArraySize], double constb[constants::ArraySize], double x[constants::ArraySize]) {
    double derivative = 0;
    double c[constants::ArraySize] = {0, 0, 0, 0, 0};
    MatrixUtils::multiplyVectorByMatrix(constA, x, c);

    for (int index = 0; index < constants::ArraySize; index++) {
        derivative += pow(c[index] - constb[index], 2);
    }
    std::cout << "Derative is equal: " << 0.2 * sqrt(derivative) << std::endl;
}