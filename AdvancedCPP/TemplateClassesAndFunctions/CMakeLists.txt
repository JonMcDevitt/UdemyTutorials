cmake_minimum_required(VERSION 3.8)
project(TemplateClassesAndFunctions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Test.cpp Test.h Exercises.cpp Exercises.h Parent.cpp Parent.h Child.cpp Child.h)
add_executable(TemplateClassesAndFunctions ${SOURCE_FILES})