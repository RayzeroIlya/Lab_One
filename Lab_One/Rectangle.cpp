#pragma once
#include <iostream>

double rectangleSquare(double length, double width) {
	return length * width;
}

double rectanglePerimeter(double length, double width) {
	return 2 * length + 2 * width;
}

double rectangleDiagonal(double length, double width) {
	return sqrt(length*length + width*width);
}