
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
	Account account1{ "Sayed Ahmed", 75 };
	Account account2{"7afiz", -1};


	cout << "account1: " << account1.getName() << " balance is " << account1.getBalance() << " $" << endl;
	cout << "account2: " << account2.getName() << " balance is " << account2.getBalance() << " $" << endl;

	int depositAmount;
	cout << "\nEnter Your Deposit for account1" << endl;
	cin >> depositAmount;
	// Calling The deposit functions for adding to the balance
	account1.deposit(depositAmount);
	cout << "adding " << depositAmount << " to account1" << " ( " << account1.getName() << " )" << endl;

	cout << "Your Balance is: " << account1.getBalance() << endl;

	cout << "\nEnter Your Deposit for account2" << endl;
	cin >> depositAmount;
	account2.deposit(depositAmount);
	cout << "adding " << depositAmount << " to account2" << " ( " << account2.getName() << " )" << endl;

	cout << "Your Balance is: " << account2.getBalance() << endl;

}