//
// Created by Owner on 9/22/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H
#define TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H

#include "Test.h"
#include <algorithm>
#include <vector>


class Exercises {
public:
    static void TemplateClasses();

    static void TemplateFunctions();

    static void TemplateFunctionsAndTypeInference();

    static void FunctionPointers();

    static void UsingFunctionPointers();

private:
    template<typename T>
    static void print(T data);

    static void print(int data);

    static void test();

    static void testWithParams(int a, int b);

    static bool match(string test);

    static int CountStrings(vector<string> &words, bool (*matcher)(string testVal));
};


#endif //TEMPLATECLASSESANDFUNCTIONS_EXERCISES_H
