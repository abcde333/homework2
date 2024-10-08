#include "ComplexNumber.h"

void sortComplexNumbers(ComplexNumber* complexNumbers, int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
	{
            if (complexNumbers[j].absolute() > complexNumbers[j + 1].absolute()) 
		{
                	ComplexNumber temp = complexNumbers[j];
                	complexNumbers[j] = complexNumbers[j + 1];
                	complexNumbers[j + 1] = temp;
            	}
        }
    }
}
