#pragma once
#include <iostream>

double rectangle_square(double length, double width) {
	return length * width;
}

double rectangle_perimeter(double length, double width) {
	return 2 * length + 2 * width;
}

double rectangle_diagonal(double length, double width) {
	return sqrt(length*length + width*width);
}