#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>

class ComplexNumber {
public:
    ComplexNumber();
    ComplexNumber(double real = 0, double imaginary = 0);

    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(double constant) const;
    double absolute() const;

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);

private:
    double real;
    double imaginary;
};

#endif // COMPLEXNUMBER_H

