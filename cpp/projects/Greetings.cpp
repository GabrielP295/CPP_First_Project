#include "Greetings.h"
#include <iostream>

Greetings::Greetings(string name, int age) {
	this->name = name;
	this->age = age;
}

string Greetings::CreateMessage() {
	if (this->age > 35) return this->name + ", you're " + to_string(this->age) + " years old... you are too old\n";
	return this->name + ", you're " + to_string(this->age) + " years old... you are too young\n";
}

void Greetings::PrintMessage() {
	cout << this->CreateMessage();
}