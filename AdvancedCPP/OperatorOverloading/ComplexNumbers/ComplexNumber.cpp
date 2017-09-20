//
// Created by Owner on 9/20/2017.
//

#include "ComplexNumber.h"

using namespace ComplexNumbers;
using namespace std;

ComplexNumber::ComplexNumber() : real(0), imaginary(0) {
    cout << "Using blank constructor." << endl;
}

ComplexNumber::ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {
    cout << "Using args-filled constructor." << endl;
}

ComplexNumber::ComplexNumber(const ComplexNumber &num) {
    cout << "Using copy constructor" << endl;
    real = num.real;
    imaginary = num.imaginary;
}

const ComplexNumber &ComplexNumber::operator=(const ComplexNumber &num) {
    cout << "Using assignment operator override" << endl;

    real = num.real;
    imaginary = num.imaginary;

    return *this;
}

ostream &operator<<(ostream& out, ComplexNumber& num) {
    out << "(" << num.GetReal() << ", " << num.GetImaginary() << ")";
    return out;
}
