//
// Created by Owner on 9/25/2017.
//

#ifndef TEMPLATECLASSESANDFUNCTIONS_ANIMAL_H
#define TEMPLATECLASSESANDFUNCTIONS_ANIMAL_H

#include <iostream>

using namespace std;

/** Note: this is very much similar to interfaces it seems! All pure virtual functions MUST be implemented before the
 *  class can be extended   */
class Animal {
public:
    virtual void Speak() = 0;
    virtual void Run() = 0;
};


#endif //TEMPLATECLASSESANDFUNCTIONS_ANIMAL_H
