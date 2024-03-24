
#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
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
	}
}


