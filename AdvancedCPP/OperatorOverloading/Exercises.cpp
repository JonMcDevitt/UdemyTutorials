//
// Created by Owner on 9/20/2017.
//

#include "Exercises.h"

void Exercises::ComplexNumberClass() {
    cout << "----The Complex Number Class----" << endl;
    ComplexNumber c;    /** Runs the blank constructor  */
    ComplexNumber c1(2, 3); /** Runs the args-filled constructor    */
    ComplexNumber c2 = c1;  /** Runs the copy constructor   */

    c = c2;

    cout << c1 << endl;
}

void Exercises::OverloadingPlus() {
    cout << "----Overloading Plus----" << endl;

    ComplexNumber c1(3, 1);
    ComplexNumber c2(5, -1);

    cout << "Number 1: " << c1 << endl;
    cout << "Number 2: " << c2 << endl;

    ComplexNumber c3 = c1 + c2;

    cout << "Number 3 = #1 + #2 ==> " << c3 << endl;

    ComplexNumber c4 = c1 + c2 + c3;
    cout << "Number 4 = 1 + 2 + 3 ==> " << c4 << endl;
}

void Exercises::OverloadingEquality() {
    cout << "----Overloading Equality----" << endl;

    ComplexNumber c1(3, 1);
    ComplexNumber c2(4, 5);
    ComplexNumber c3(3, 1);

    cout << c1 << " is different from " << c2 << "?" << endl;
    cout << ((c1 != c2) ? "true" : "false") << endl;

    cout << c1 << " is the same as " << c3 << "?" << endl;
    cout << ((c1 == c3) ? "true" : "false") << endl;
}

void Exercises::OverloadingDereference() {

}
