//
// Created by Zera on 3/18/2022.
//
#include "Constants.h"
#include "PrintUtils.h"
#include "cmath"

#ifndef METODY_NUMERYCZNE_GRADIENT_H
#define METODY_NUMERYCZNE_GRADIENT_H


class Gradient {
public:
    static void method();
    static void fillA(double[][constants::ArraySizeLabThree]);
    static void fillB(double[constants::ArraySizeLabThree]);
    static void fillX(double[constants::ArraySizeLabThree], double);
    static void multiplyVectorXByMatrixA(double[][constants::ArraySizeLabThree], double[constants::ArraySizeLabThree], double[constants::ArraySizeLabThree]);

};


#endif //METODY_NUMERYCZNE_GRADIENT_H
