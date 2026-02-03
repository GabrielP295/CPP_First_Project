#include <iostream>
#include "TriangleClass.h"
using namespace std;

int main() {
	double base, height;
	cout << "What is the base of the triangle? ";
	cin >> base;
	cout << "What is the height of the triangle? ";
	cin >> height;

	TriangleClass firstTriangle(base, height);
	double area = firstTriangle.calculateArea();

	cout << "The area of the triangle is " << area << endl;
}