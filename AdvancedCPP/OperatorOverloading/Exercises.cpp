//
// Created by Owner on 9/20/2017.
//

#include "Exercises.h"

void Exercises::ComplexNumberClass() {
    ComplexNumber c;    /** Runs the blank constructor  */
    ComplexNumber c1(2, 3); /** Runs the args-filled constructor    */
    ComplexNumber c2 = c1;  /** Runs the copy constructor   */

    c = c2;

    cout << c1 << endl;
}
