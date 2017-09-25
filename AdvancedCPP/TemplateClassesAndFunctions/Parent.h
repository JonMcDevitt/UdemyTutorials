//
// Created by Owner on 9/22/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_PARENT_H
#define TEMPLATECLASSESANDFUNCTIONS_PARENT_H

#include <iostream>

using namespace std;

class Parent {
public:
    Parent();
    Parent(const Parent &p);
    virtual ~Parent();
    virtual void print();
};


#endif //TEMPLATECLASSESANDFUNCTIONS_PARENT_H
