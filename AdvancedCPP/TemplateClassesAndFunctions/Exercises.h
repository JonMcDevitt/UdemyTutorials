//
// Created by Owner on 9/22/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H
#define TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H

#include "Test.h"

class Exercises {
public:
    static void TemplateClasses();

    static void TemplateFunctions();

private:
    template <typename T>
    static void print(T data);
};


#endif //TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H
