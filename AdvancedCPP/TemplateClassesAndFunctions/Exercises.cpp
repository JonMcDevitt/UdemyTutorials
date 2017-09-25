//
// Created by Owner on 9/22/2017.
//

#include "Exercises.h"
#include "Animals/Labrador.h"

void Exercises::TemplateClasses() {
    cout << "----Template Classes----" << endl;

    Test<string> test1("Hello, world!");

    test1.print();
}

void Exercises::TemplateFunctions() {
    cout << "----Template Functions----" << endl;

    /** Originally did not make static, silly mistake. Since accessed from a static context, print<T>(val) must also be
     *  static.*/
    print<string>("Testing a template function.");
    print(5);   /** <-- Type inference. Infers the type given the data passed into it.*/
}

template<class T>
void Exercises::print(T data) {
    cout << data << endl;
}

void Exercises::TemplateFunctionsAndTypeInference() {
    cout << "----Template Functions and Type Inference----" << endl;
}

void Exercises::print(int data) {
    cout << data << endl;
}

void Exercises::FunctionPointers() {
    cout << "----Function Pointers----" << endl;

    test();
    void (*pTest)();    /** <-- Variable which is a pointer to a function with a void return type and 0 parameters  */

    pTest = test;

    pTest();    /** Call the function   */

    void (*newTest)(int, int);
    newTest = testWithParams;

    newTest(5, 6);
}

void Exercises::test() {
    cout << "Hello" << endl;
}

void Exercises::testWithParams(int a, int b) {
    cout << a*b << endl;
}

void Exercises::UsingFunctionPointers() {
    cout << "----Using Function Pointers----" << endl;

    vector<string> texts;
    texts.emplace_back("One");
    texts.emplace_back("Two");
    texts.emplace_back("Three");
    texts.emplace_back("Two");
    texts.emplace_back("Four");
    texts.emplace_back("Two");
    texts.emplace_back("Three");

    cout << match("oned") << endl;


    /** Given a list, pass a condition (boolean) to determine when we should count up */
    count_if(texts.begin(), texts.end(), match);

    cout << "Number of strings with 3 characters: " << endl;
    cout << CountStrings(texts, match) << endl;
}

bool Exercises::match(string test) {
    return test.size() == 3;
}

int Exercises::CountStrings(vector<string> &words, bool (*matcher)(string testVal)) {
    int tally = 0;
    for(auto &value : words) {
        if(matcher(value)) {
            tally++;
        }
    }
    return tally;
}

void Exercises::ObjectSlicingAndPolymorphism() {
    cout << "----Object Slicing and Polymorphism----" << endl;

    Child c1;
    Parent &p1 = c1;
    p1.print();

    Parent p2 = Child();

    p2.print();
}

void Exercises::AbstractClassesAndPureVirtualFunctions() {
    cout << "----Abstract Classes and Pure Virtual Functions----" << endl;

    Labrador labrador;
    Dog *dog = &labrador;

    dog->Speak();
    labrador.Run();

    Labrador labradors[10];

    for(auto lab : labradors) {
        lab.Run();
    }
}
