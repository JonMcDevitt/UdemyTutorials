//
// Created by Owner on 9/22/2017.
//

#include "Child.h"

Child::Child() : Parent() {

}

Child::Child(const Parent &p) : Parent(p) {
    cout << "copying parent to child" << endl;
}

void Child::print() {
    cout << "child" << endl;
}
