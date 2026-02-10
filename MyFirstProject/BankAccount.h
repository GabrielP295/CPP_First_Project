#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
	string Name;
	double Balance;
public:
	void BankAccount(string);
	void BankAccount(string, double);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string GetName();
	double GetBalance();
};

