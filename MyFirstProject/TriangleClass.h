#pragma once
class TriangleClass
{
public:
	TriangleClass(double, double);
	TriangleClass();
	double getHeight();
	double getBase();
	double getArea();
	void setBase(double);
	void setHeight(double);
	void calculateArea();
private:
	double height;
	double base;
	double area;
};

