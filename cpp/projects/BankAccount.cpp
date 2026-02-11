#include "BankAccount.h"

BankAccount::BankAccount(string name) {
	this->Name = name;
	this->Balance = 0;
}

BankAccount::BankAccount(string name, double balance) {
	this->Name = name;
	this->Balance = balance;
}

void BankAccount::Withdraw(double withdrawValue) {
	if (withdrawValue > 500) {
		cout << "You cannot withdraw more than $500 at one time." << endl;
		return;
	}
	if (this->Balance > withdrawValue) {
		this->Balance -= withdrawValue;
	}
	else {
		cout << "You cannot withdraw more than money than you have." << endl;
	}

}

void BankAccount::Deposit(double depositValue) {
	if (depositValue <= 1000) {
		this->Balance += depositValue;
		cout << "You have successfully deposited $" << depositValue << " into your account" << endl;
	}
	else {
		cout << "You cannot deposit more than $1,000 at one time." << endl;
	}
}

void BankAccount::SetBalance(double newBalance) {
	this->Balance = newBalance;
}

string BankAccount::GetName() {
	return this->Name;
}

double BankAccount::GetBalance() {
	return this->Balance;
}
