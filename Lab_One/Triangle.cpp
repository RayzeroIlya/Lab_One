#pragma once 
#include <iostream>
#include <math.h>

double trianglePerimeter(double sideA, double sideB, double sideC) {
	return (sideA + sideB + sideC);
}
double triangleSquare(double sideA, double sideB, double sideC) {
	double p = (sideA + sideB + sideC)/2;
	return (sqrt(p * (p - sideA) * (p - sideB) * (p - sideC)));
}
int isoscelesTriangle(double sideA, double sideB, double sideC) {
	if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
		return (0);
	}else if (sideA == sideB || sideA == sideC || sideB == sideC) {
		return (2);
	}else if (sideA == sideB && sideB == sideC) {
		return (3);
	}else {
		return (1);
	}
}