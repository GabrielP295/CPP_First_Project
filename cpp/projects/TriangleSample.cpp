#include <iostream>
#include "Triangle.h";

int main() {
	Triangle gabriel(45, 20);
	gabriel.calculateArea();
	std::cout << "The triangle area is " << gabriel.getArea() << std::endl;
}