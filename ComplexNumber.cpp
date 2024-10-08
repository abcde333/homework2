#include <iostream>
#include <cmath>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const 
{
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const 
{
    return ComplexNumber(real - other.real, imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::operator*(double constant) const 
{
    return ComplexNumber(real * constant, imaginary * constant);
}

double ComplexNumber::absolute() const 
{
    return std::sqrt(real * real + imaginary * imaginary);
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn)
{
    os << cn.real << " + " << cn.imaginary << "i";
    return os;
}

