#include <iostream>;
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "Enter the first integer: ";
	cin >> a;
	cout << "Enter the second integer: ";
	cin >> b;
	cout << "Enter the third integer: ";
	cin >> c;
	cout << "Enter the fourth integer: ";
	cin >> d;
	cout << "Enter the fifth integer: ";
	cin >> e;
	int high = a;
	int low = a;
	if (a < low) {
		low = a;
	}
	if (b < low) {
		low = b;
	}
	if (c < low) {
		low = c;
	}
	if (d < low) {
		low = d;
	}
	if (e < low) {
		low = e;
	}
	if (a > high) {
		high = a;
	}
	if (b > high) {
		high = b;
	}
	if (c > high) {
		high = c;
	}
	if (d > high) {
		high = d;
	}
	if (e > high) {
		high = e;
	}
	cout << "The highest number is ==> " << high << endl;
	cout << "The lowest number is ==> " << low << endl;

}