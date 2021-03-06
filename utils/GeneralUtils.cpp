//
// Created by Zera on 3/7/2022.
//

#include "GeneralUtils.h"

void GeneralUtils::invokeMethodsOnGeneratedData(std::function<void(double [][constants::ArraySizeLabOne], double [constants::ArraySizeLabOne], double [constants::ArraySizeLabOne])> func, std::string funcName) {
    std::cout << funcName << ": " << std::endl;
    double q = 0.2;
    double step = 0.2001;
    for (int iterations = 0; double(iterations) * step < 5 - q; iterations++) {
//    for (int iterations = 0; iterations < 1; iterations++) {
        double A[constants::ArraySizeLabOne][constants::ArraySizeLabOne] = {{0.0002, 1, 6,  9, 10},
                                                                            {0.0002, 1, 6,  9, 10},
                                                                            {1,      6, 6,  8, 6},
                                                                            {5,      9, 10, 7, 10},
                                                                            {3,      4, 9,  7, 9}};
        double constA[constants::ArraySizeLabOne][constants::ArraySizeLabOne] = {{0.0002, 1, 6,  9, 10},
                                                                                 {0.0002, 1, 6,  9, 10},
                                                                                 {1,      6, 6,  8, 6},
                                                                                 {5,      9, 10, 7, 10},
                                                                                 {3,      4, 9,  7, 9}};
        double b[constants::ArraySizeLabOne] = {10, 2, 9, 9, 3};
        double constb[constants::ArraySizeLabOne] = {10, 2, 9, 9, 3};
        double x[constants::ArraySizeLabOne] = {0, 0, 0, 0, 0};
        A[0][0] *= (q + step * double(iterations));
        constA[0][0] *= (q + step * double(iterations));

        func(A, b, x);
        Derivative::derivativeMethod(constA, constb, x);
    }
}