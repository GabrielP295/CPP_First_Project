#include "Triangle.h";

Triangle::Triangle(double height, double base) {
	this->height = height;
	this->base = base;
	this->area = 0;
}

void Triangle::calculateArea() {
	this->area = (this->base * this->height) / 2;
}

double Triangle::getArea() {
	return this->area;
}

void Triangle::setHeight(double height) {
	this->height = height;
}

void Triangle::setBase(double base) {
	this->base = base;
}
