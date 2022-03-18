//
// Created by Zera on 3/7/2022.
//
#include <functional>
#include "iostream"
#include "../consts/Constants.h"
#include "Derivative.h"
#ifndef MN_LAB1_GENERALUTILS_H
#define MN_LAB1_GENERALUTILS_H


class GeneralUtils {
public:
    static void invokeMethodsOnGeneratedData(std::function<void(double [][constants::ArraySizeLabOne], double [constants::ArraySizeLabOne], double [constants::ArraySizeLabOne])> func, std::string funcName);
};


#endif //MN_LAB1_GENERALUTILS_H
