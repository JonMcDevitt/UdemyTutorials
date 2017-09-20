cmake_minimum_required(VERSION 3.8)
project(StandardTemplateLibrary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Exercises.cpp Exercises.h Exceptions/InputException.cpp Exceptions/InputException.h Objects/Person.cpp Objects/Person.h)
add_executable(StandardTemplateLibrary ${SOURCE_FILES})