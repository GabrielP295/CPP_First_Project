#pragma once
class TriangleClass
{
public:
	double getHeight();
	double getBase();
	void setBase(double);
	void setHeight(double);
	double calculateArea()
private:
	double height;
	double base;
};

