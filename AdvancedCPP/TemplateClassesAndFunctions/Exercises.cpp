//
// Created by Owner on 9/22/2017.
//

#include "Exercises.h"

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
