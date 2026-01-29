#include <iostream>;
using namespace std;

int main() {
	int a = 25, b = 45, c = 200;
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
	if (a > high) {
		high = a;
	}
	if (b > high) {
		high = b;
	}
	if (c > high) {
		high = c;
	}
	cout << "The highest number is ==> " << high << endl;
	cout << "The lowest number is ==> " << low << endl;

}