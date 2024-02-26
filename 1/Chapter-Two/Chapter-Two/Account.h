#pragma once
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
