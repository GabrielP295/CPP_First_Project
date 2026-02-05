#include "TriangleClass.h"
TriangleClass::TriangleClass(double base, double height) {
	this->base = base;
	this->height = height;
	this->area = 0;
}
TriangleClass::TriangleClass() {
	this->base = 0;
	this->height = 0;
	this->area = 0;
}
double TriangleClass::getBase() {
	return this->base;
}
double TriangleClass::getHeight() {
	return this->height;
}
double TriangleClass::getArea() {
	return this->area;
}
void TriangleClass::setBase(double newBase) {
	this->base = newBase;
}
void TriangleClass::setHeight(double newHeight) {
	this->height = newHeight;
}
void TriangleClass::calculateArea() {
	this->area = this->height * this->base * 0.5;
};
