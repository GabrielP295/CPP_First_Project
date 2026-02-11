#include "BankAccount.h"

int main() {
	string name1, name2;
	double balance, setBalance;

	cout << "What is the name of the first account? ";
	getline(cin, name1);

	cout << "How much do you want to initially deposit? ";
	cin >> balance;
	cin.ignore();

	cout << "What is the name of the second account? ";
	getline(cin, name2);

	//Bank Account 1, name and balance
	BankAccount account1 = BankAccount(name1, balance);
	//Bank Account 2, name only
	BankAccount account2 = BankAccount(name2);

	//Set account 2 balance with SetBalance()
	cout << "Set the initial balance of " << account2.GetName() << "'s account: ";
	cin >> setBalance;
	cout << account2.GetName() << "'s account balance before setting balance: $" << account2.GetBalance() << endl;
	account2.SetBalance(setBalance);
	cout << account2.GetName() << "'s account balance after setting balance: $" << account2.GetBalance() << endl;

	
	double withdraw, deposit;
	cout << "Switching to " << account1.GetName() << "..." << endl;
	cout << "How much do you want to deposit? ";
	cin >> deposit;
	cout << account1.GetName() << "'s account balance before deposit: $" << account1.GetBalance() << endl;
	account1.Deposit(deposit);
	cout << account1.GetName() << "'s account balance after deposit: $" << account1.GetBalance() << endl;

	cout << "How much do you want to withdraw? ";
	cin >> withdraw;
	cout << account1.GetName() << "'s account balance before withdrawal: $" << account1.GetBalance() << endl;
	account1.Withdraw(withdraw);
	cout << account1.GetName() << "'s account balance after withdrawal: $" << account1.GetBalance() << endl;

}