#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
	string Name;
	double Balance;
public:
	BankAccount(string);
	BankAccount(string, double);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string GetName();
	double GetBalance();
};

