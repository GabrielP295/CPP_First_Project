#include <iostream>
#include <numbers>
#include <cmath>
using namespace std;

double calcAreaOfCircle(double pi, double r);

int main() {
	double radius;
	double PI = std::numbers::pi;
	while (true) {
		try {
			cout << "Enter the radius of a circle: ";
			cin >> radius;
			double area = calcAreaOfCircle(PI, radius);
			cout << "Area of a circle is: " << area << endl;
			break;
		}
		catch (invalid_argument& e) {
			cout << "Please input a valid value for radius." << endl;
		}
	}
}

double calcAreaOfCircle(double pi, double r) {
	if (r < 0) {
		throw invalid_argument("Radius cannot be negative.");
	}
	return pow(r, 2) * pi;
}