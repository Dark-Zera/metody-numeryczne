cmake_minimum_required(VERSION 3.21)
project(metody-numeryczne)

set(CMAKE_CXX_STANDARD 14)

add_executable(metody-numeryczne main.cpp
        labOneMethods/GaussMethod.cpp labOneMethods/JordanMethod.cpp labOneMethods/Derivative.cpp
        utils/PrintUtils.cpp utils/MatrixUtils.cpp utils/GeneralUtils.cpp)

include_directories(utils labOneMethods consts)