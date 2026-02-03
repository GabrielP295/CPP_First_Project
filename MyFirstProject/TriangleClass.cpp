#include "TriangleClass.h"
TriangleClass::TriangleClass(double base, double height) {
	this->base = base;
	this->height = height;
}
double TriangleClass::getBase() {
	return this->base;
}
double TriangleClass::getHeight() {
	return this->height;
}
void TriangleClass::setBase(double newBase) {
	this->base = newBase;
}
void TriangleClass::setHeight(double newHeight) {
	this->height = newHeight;
}
double TriangleClass::calculateArea() {
	return this->height * this->base * 0.5;
};