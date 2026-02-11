#include <iostream>
#include "TriangleClass.h"
using namespace std;

int main() {
	
	//New York
	TriangleClass newYork(40, 20);
	newYork.calculateArea();
	cout << "The NY Triangle Area is " << newYork.getArea() << endl;

	//Chicago
	TriangleClass chicago;
	chicago.setHeight(100);
	chicago.setBase(50);
	chicago.calculateArea();
	cout << "The Chicago Triangle Area is " << chicago.getArea() << endl;

	//London
	TriangleClass london(40, 20);
	london.calculateArea();
	cout << "The London Triangle Area is " << london.getArea() << endl;
}