#include <iostream>

int rectangle_square(int length, int width) {

	return length * width;
}

int rectangle_perimeter(int length, int width) {
	return 2 * length + 2 * width;
}

int rectangle_diagonal(int length, int width) {
	return sqrt(length*length + width*width);
}