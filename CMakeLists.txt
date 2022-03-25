cmake_minimum_required(VERSION 3.21)
project(metody-numeryczne)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE sources "consts/*.cpp" "utils/*.cpp" "labOneMethods/*.cpp" "labTwoMethods/*.cpp" "labThreeMethods/*.cpp")
include_directories(consts utils labOneMethods labTwoMethods labThreeMethods)

add_executable(metody-numeryczne main.cpp ${sources})

MATH(EXPR stack_size "20 * 1000 * 1000")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")