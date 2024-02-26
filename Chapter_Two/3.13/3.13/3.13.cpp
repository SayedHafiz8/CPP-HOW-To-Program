
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
	cout << "The account: " << accountToDisplay.getName() << " balance is " << accountToDisplay.getBalance() << " $" << endl;
}

int main()
{
	Account account1{ "Sayed Ahmed", 75 };
	Account account2{ "7afiz", -1 };

	displayAccount(account1);
	
	

	int depositAmount, withdrawalAmount;
	cout << "\nEnter Your Deposit for account1" << endl;
	cin >> depositAmount;
	// Calling The deposit function for adding to the balance
	account1.deposit(depositAmount);
	cout << "adding " << depositAmount << " to account1" << endl;
	displayAccount(account1);
	cout << "\nEnter Your withdraw from account1" << endl;
	cin >> withdrawalAmount;
	// Calling the Withdraw function 
	account1.withdraw(withdrawalAmount);
	cout << "withdraw " << withdrawalAmount << " from account1 " << endl;
	displayAccount(account1);

	cout << "\nEnter Your Deposit for account2" << endl;
	cin >> depositAmount;
	account2.deposit(depositAmount);
	cout << "adding " << depositAmount << " to account2" << endl;

	displayAccount(account2);
	cout << "\nEnter Your withdrawal from account2" << endl;
	cin >> withdrawalAmount;
	account2.withdraw(withdrawalAmount);
	cout << "withdraw " << withdrawalAmount << " from account2 " << endl;
	displayAccount(account2);

}