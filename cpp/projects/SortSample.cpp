#include <iostream>;
using namespace std;

int find_smallest_number(int a, int b, int c, int d, int e);
int find_largest_number(int a, int b, int c, int d, int e);

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
	int low = find_smallest_number(a, b, c, d, e);
	int high = find_largest_number(a, b, c, d, e);

	cout << "The highest number is ==> " << high << endl;
	cout << "The lowest number is ==> " << low << endl;
}

int find_smallest_number(int a, int b, int c, int d, int e) {
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
	return low;
}
int find_largest_number(int a, int b, int c, int d, int e) {
	int high = a;
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
	return high;
}