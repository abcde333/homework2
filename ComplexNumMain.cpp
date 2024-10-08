#include <iostream>
#include "ComplexNumber.h"
#include "Sorting.h"

int main() 
{
    const int size = 5;
    ComplexNumber complexNumbers[size] = {
        ComplexNumber(1, 2),
        ComplexNumber(3, 4),
        ComplexNumber(0, 1),
        ComplexNumber(-1, -1),
        ComplexNumber(2, -3)
    };

    std::cout << "Original complex numbers:\n";
    for (int i = 0; i < size; ++i)
        std::cout << complexNumbers[i] << std::endl;

   
    sortComplexNumbers(complexNumbers, size);

    std::cout << "\nSorted complex numbers (by absolute value):\n";
    for (int i = 0; i < size; ++i)
        std::cout << complexNumbers[i] << std::endl;
 
}

