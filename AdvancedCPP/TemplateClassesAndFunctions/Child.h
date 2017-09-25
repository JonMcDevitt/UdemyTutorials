//
// Created by Owner on 9/22/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_CHILD_H
#define TEMPLATECLASSESANDFUNCTIONS_CHILD_H

#include "Parent.h"

class Child : public Parent{
public:
    Child();

    explicit Child(const Parent &p);

    void print() override;
};


#endif //TEMPLATECLASSESANDFUNCTIONS_CHILD_H
