
#include <iostream>
<<<<<<< HEAD
#include "Triangle.h"
#include "Rectangle.h"

>>>>>>> rectangle
using namespace std;

int main()
{
<<<<<<< HEAD
	int sideA, sideB, sideC;
	cout << "Input 3 sides for triangle\n";
	cin >> sideA >> sideB >> sideC;
	cout << "Triangle perimeter = " << trianglePerimeter(sideA, sideB, sideC) << endl;
	cout << "Triangle square = " << triangleSquare(sideA, sideB, sideC) << endl;
	switch (isoscelesTriangle(sideA, sideB, sideC)) {
	case 0: cout << "Not a triagle" << endl; break;
	case 1: cout << "Triangle" << endl; break;
	case 2: cout << "Isosceles triangle" << endl; break;
	case 3: cout << "Equal triangle" << endl; break;
	int length, width;
	cout << "Input lenght and width for rectangle\n";
	cin >> length >> width;
	cout << "Perimeter = " << rectanglePerimeter(length, width) << endl;
	cout << "Square = " << rectangleSquare(length, width) << endl;
	cout << "Diagonal = " << rectangleDiagonal(length, width) << endl;
>>>>>>> rectangle
}


