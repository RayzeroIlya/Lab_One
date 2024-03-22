﻿
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	int length, width;
	cout << "Input lenght and width for rectangle\n";
	cin >> length >> width;
	cout << "Perimeter = " << rectanglePerimeter(length, width) << endl;
	cout << "Square = " << rectangleSquare(length, width) << endl;
	cout << "Diagonal = " << rectangleDiagonal(length, width) << endl;
	cout << "Input 3 sides for triangle\n";
	int sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;
	cout << "Triangle perimeter = " << trianglePerimeter(sideA, sideB, sideC) << endl;
	cout << "Triangle square = " << triangleSquare(sideA, sideB, sideC) << endl;
	switch (isoscelesTriangle(sideA, sideB, sideC)) {
	case 0: cout << "Not a triagle" << endl; break;
	case 1: cout << "Triangle" << endl; break;
	case 2: cout << "Isosceles triangle" << endl; break;
	case 3: cout << "Equal triangle" << endl; break;
}


