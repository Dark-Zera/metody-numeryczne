//
// Created by Zera on 3/5/2022.
//

#include "Derivative.h"

void Derivative::derivativeMethod(double constA[][constants::ArraySizeLabOne], double constb[constants::ArraySizeLabOne], double x[constants::ArraySizeLabOne]) {
    double derivative = 0;
    double c[constants::ArraySizeLabOne] = {0, 0, 0, 0, 0};
    MatrixUtils::multiplyVectorByMatrix(constA, x, c);

    for (int index = 0; index < constants::ArraySizeLabOne; index++) {
        derivative += pow(c[index] - constb[index], 2);
    }
    std::cout <<  0.2 * sqrt(derivative) << std::endl;
}