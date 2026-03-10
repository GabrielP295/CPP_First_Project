#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Multiplication Table App\n";
	for (int r = 1; r <= 12; r++) {
		cout << "Table " + r << endl;
		for (int c = 0; c < 12; c++) {
			cout << r << " x " << c << " = " << r*c << endl;
		}
	}
}