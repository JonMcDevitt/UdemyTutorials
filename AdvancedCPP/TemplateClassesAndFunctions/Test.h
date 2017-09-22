//
// Created by Owner on 9/21/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_TEST_H
#define TEMPLATECLASSESANDFUNCTIONS_TEST_H

/** Tip: for template (generic) classes, implement them in a header file to avoid a bunch of buggy crap.    */

#include <iostream>

using namespace std;

template<class T>
class Test {
private:
    T obj;

public:
    Test() {
        this->obj = obj;
    }

    explicit Test(T obj) {
        this->obj = obj;
    }

    void print() {
        cout << obj << endl;
    }
};


#endif //TEMPLATECLASSESANDFUNCTIONS_TEST_H
