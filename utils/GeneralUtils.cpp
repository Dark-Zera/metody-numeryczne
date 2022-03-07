//
// Created by Zera on 3/7/2022.
//

#include "GeneralUtils.h"

void GeneralUtils::invokeMethodsOnGeneratedData(std::function<void(float [][constants::ArraySize], float [constants::ArraySize], float [constants::ArraySize])> func, std::string funcName) {
    std::cout << funcName << ": ";
    float q = 0.2;
    float step = 0.2001;
    for (int iterations = 0; iterations * step < 5 - q; iterations++) {
        float A[constants::ArraySize][constants::ArraySize] = {{0.0002, 1, 6,  9, 10},
                                                               {0.0002, 1, 6,  9, 10},
                                                               {1,      6, 6,  8, 6},
                                                               {5,      9, 10, 7, 10},
                                                               {3,      4, 9,  7, 9}};
        float b[constants::ArraySize] = {10, 2, 9, 9, 3};
        float x[constants::ArraySize] = {0, 0, 0, 0, 0};
        A[0][0] *= (q + step * float(iterations));

        func(A, b, x);
        Derivative::derivativeMethod(A,b,x);
    }
}