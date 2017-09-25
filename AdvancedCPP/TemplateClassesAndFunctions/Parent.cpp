//
// Created by Owner on 9/22/2017.
//

#include "Parent.h"

Parent::Parent(const Parent &p) {
    cout << "copy parent" << endl;
}

Parent::Parent() {
    cout << "Empty constructor" << endl;
}

Parent::~Parent() {
    cout << "Destructor" << endl;
}

void Parent::print() {
    cout << "parent" << endl;
}
