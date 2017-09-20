//
// Created by Owner on 9/20/2017.
//

#ifndef OPERATOROVERLOADING_COMPLEXNUMBER_H
#define OPERATOROVERLOADING_COMPLEXNUMBER_H

#include <iostream>

using namespace std;

namespace ComplexNumbers {
    class ComplexNumber {
    private:
        double real;
        double imaginary;

    public:
        ComplexNumber();

        ComplexNumber(double real, double imaginary);

        ComplexNumber(const ComplexNumber &num);

        const ComplexNumber &operator=(const ComplexNumber &num);

        double GetReal() const {
            return real;
        }

        double GetImaginary() const {
            return imaginary;
        }

    };
}
ostream &operator<<(ostream& out, ComplexNumbers::ComplexNumber& num);




#endif //OPERATOROVERLOADING_COMPLEXNUMBER_H
