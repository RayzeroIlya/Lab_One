
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	int length, width;
	cout << "Input lenght and width for rectangle\n";
	cin >> length >> width;
	cout << "Perimeter = " << rectanglePerimeter(length, width) << endl;
	cout << "Square = " << rectangleSquare(length, width) << endl;
	cout << "Diagonal = " << rectangleDiagonal(length, width) << endl;
}


