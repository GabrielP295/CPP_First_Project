#pragma once
class Triangle
{
public:
	double height;
	double base;
	Triangle(double, double);
	void calculateArea();
	double getArea();
	void setBase(double);
	void setHeight(double);//test commit
private:
	double area;
};

