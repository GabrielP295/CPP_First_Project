#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	char option;

	do {
		cout << "Menu of Optionsgi\n";
		cout << "===============\n\n";
		cout << "a. Say Good Morning in Spanish\n";
		cout << "b. Say Good Morning in Portugese\n";
		cout << "c. Say Good Morning in Italian\n";
		cout << "x. To EXIT\n";
		cout << "\n\nEnter your option ==> ";

		cin >> option;

		cout << endl;
		switch (option) {
		case 'a':
			cout << "Buenos dias\n" << endl;
			break;
		case 'b':
			cout << "Bom dia\n" << endl;
			break;
		case 'c':
			cout << "Buongiorno\n" << endl;
			break;
		case 'x':
			cout << "Exiting program. Goodbye!\n" << endl;
			break;
		default:
			cout << "Invalid option. Please run again and select a, b, c, or x.\n" << endl;
		}
		system("pause");
		system("cls");
	} while (option != 'x');
}