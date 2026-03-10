#pragma once
#include <string>
using namespace std;
class Greetings
{
private:
	string name;
	int age;
	string CreateMessage();
public:
	Greetings(string, int);
	void PrintMessage();
};

