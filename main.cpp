#include "labOneMethods/GaussMethod.h"
#include "labOneMethods/JordanMethod.h"
#include "labOneMethods/Derivative.h"
#include "labTwoMethods/UARLMethod.h"
#include "labThreeMethods/Gradient.h"
#include "utils/GeneralUtils.h"

using namespace constants;

int main() {
    //LabOne
//    GeneralUtils::invokeMethodsOnGeneratedData(GaussMethod::gaussMethod, "Gauss method");
//    GeneralUtils::invokeMethodsOnGeneratedData(JordanMethod::jordanMethod, "Jordan method");
    //LabTwo
//    UARLMethod::method();
    //LabThree
    Gradient::method();
    return 0;
}