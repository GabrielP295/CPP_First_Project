#pragma once
class TriangleClass
{
public:
	TriangleClass(double, double);
	double getHeight();
	double getBase();
	void setBase(double);
	void setHeight(double);
	double calculateArea();
private:
	double height;
	double base;
};

