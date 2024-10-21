all:Complex_Number
Complex_Number:ComplexNumMain.o ComplexNumber.o Sorting.o 
	g++ ComplexNumMain.o ComplexNumber.o Sorting.o -o Complex_Number

ComplexNumMain.o: ComplexNumMain.cpp
	g++ -c ComplexNumMain.cpp

ComplexNumber.o: ComplexNumber.cpp
	g++ -c  ComplexNumber.cpp

Sorting.o: Sorting.cpp
	g++ -c  Sorting.cpp

clean:
	rm -rf *.o Complex_Number
