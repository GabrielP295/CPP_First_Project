#include "BankAccount.h"
#include <vector>
#include <cstdlib>

using namespace std;

vector<BankAccount> createAccountWithBalance(vector<BankAccount>);
vector<BankAccount> createAccountWithoutBalance(vector<BankAccount>);
void viewAllAccounts(vector<BankAccount>);
void getAccountById(vector<BankAccount>);
vector<BankAccount> deposit(vector<BankAccount>);
vector<BankAccount> withdraw(vector<BankAccount>);

int main() {
	char option;
	vector<BankAccount> bankAccounts;

	do {
		cout << "Menu of Options\n";
		cout << "a. Create a new account with initial balance\n";
		cout << "b. Create a new account with no initial balance\n";
		cout << "c. View all accounts\n";
		cout << "d. Select an account by id\n";
		cout << "e. Deposit\n";
		cout << "f. Withdraw\n";
		cout << "x. Exit\n";
		cout << "Option: ";

		cin >> option;

		switch (option) {
		case 'a':
			bankAccounts = createAccountWithBalance(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'b':
			bankAccounts = createAccountWithoutBalance(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'c':
			viewAllAccounts(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'd':
			getAccountById(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'e':
			bankAccounts = deposit(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'f':
			bankAccounts = withdraw(bankAccounts);
			system("pause");
			system("cls");
			break;
		case 'x':
			cout << "Exiting program..." << endl;
			system("pause");
			break;
		default:
			cout << "Invalid entry, please try again." << endl;
			system("pause");
			break;
		}
	} while (option != 'x');

	return 0;
}

vector<BankAccount> createAccountWithBalance(vector<BankAccount> accounts) {
	string name;
	double balance;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter initial balance: ";
	cin >> balance;
	BankAccount newAccount = BankAccount(name, balance);
	accounts.push_back(newAccount);
	cout << name << "'s account(id: " << newAccount.GetId() << ") was successfully created with an initial balance of $" << balance << ".\n";

	return accounts;
}

vector<BankAccount> createAccountWithoutBalance(vector<BankAccount> accounts) {
	string name;
	cout << "Enter name: ";
	cin >> name;
	BankAccount newAccount = BankAccount(name);
	accounts.push_back(newAccount);
	cout << name << "'s account(id: " << newAccount.GetId() << ") was successfully created\n";
	return accounts;
}

void viewAllAccounts(vector<BankAccount> accounts) {
	for (int i = 0; i < accounts.size(); i++) {
		cout << "ID: " << accounts[i].GetId() << " | Name: " << accounts[i].GetName() << " | Balance: $" << accounts[i].GetBalance() << endl;
	}
}

void getAccountById(vector<BankAccount> accounts) {
	int searchId;
	cout << "Enter ID to find: ";
	cin >> searchId;
	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].GetId() == searchId) {
			cout << "Account Found - Name: " << accounts[i].GetName() << " Balance: $" << accounts[i].GetBalance() << endl;
			return;
		}
	}
	cout << "Account with ID " << searchId << " not found." << endl;
}

vector<BankAccount> deposit(vector<BankAccount> accounts) {
	int searchId;
	double amount;
	cout << "Enter ID: ";
	cin >> searchId;
	cout << "Enter deposit amount: ";
	cin >> amount;
	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].GetId() == searchId) {
			accounts[i].Deposit(amount);
			cout << "$" << amount << " successfully deposited into " << accounts[i].GetName() << "'s account.\n";
			return accounts;
		}
	}
	cout << "Account not found." << endl;
	return accounts;
}

vector<BankAccount> withdraw(vector<BankAccount> accounts) {
	int searchId;
	double amount;
	cout << "Enter ID: ";
	cin >> searchId;
	cout << "Enter withdrawal amount: ";
	cin >> amount;
	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i].GetId() == searchId) {
			accounts[i].Withdraw(amount);
			cout << "$" << amount << " successfully withdrawn from " << accounts[i].GetName() << "'s account.\n";
			return accounts;
		}
	}
	cout << "Account not found." << endl;
	return accounts;
}
