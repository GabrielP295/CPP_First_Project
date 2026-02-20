#pragma once
#include <string>
#include <iostream>
using namespace std;

class BankAccount
{
private:
	string Name;
	double Balance;
	static int id;
public:
	BankAccount(string);
	BankAccount(string, double);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string GetName();
	double GetBalance();
	int GetId();
};

