#pragma once
#include <iostream>
#include <string>

class Account {
public:
	Account(std::string accountName, int initialBalance)
		:name{ accountName } {

		if (initialBalance > 0) {
			balance = initialBalance;
		}
	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	int getBalance() {
		return balance;
	}

	void withdraw(int withdrawalAmount) {
		if (withdrawalAmount < balance || withdrawalAmount == balance) {
			balance = balance - withdrawalAmount;
		}
		if (withdrawalAmount > balance) {
			std::cout << "Withdrawal amount exceeded account balance." << std::endl;
		}
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() {
		return name;
	}
private:
	std::string name;
	int balance{ 0 };
};
