cmake_minimum_required(VERSION 3.8)
project(OperatorOverloading)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Exercises.cpp Exercises.h ComplexNumbers/ComplexNumber.cpp ComplexNumbers/ComplexNumber.h)
add_executable(OperatorOverloading ${SOURCE_FILES})