#include "Greetings.h"
#include <iostream>
#include <string>

int main() {
	string name;
	int age;

	cout << "Enter your name => ";
	getline(cin, name);
	cout << "Enter you age => ";
	cin >> age;

	Greetings person1 = Greetings(name, age);
	person1.PrintMessage();
}