#include "BankAccount.h"
#include <cstring>
#include <iostream>

BankAccount::BankAccount(const char * client, const char * num, double bal)
{
	strcpy(name, client);
	strcpy(accnum, num);
	balance = bal;
}

void BankAccount::show() const
{
	std::cout << "The name is " << name << std::endl;
	std::cout << "The balance is " << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
	balance += cash;
}

void BankAccount::withdraw(double cash)
{
	balance -= cash;
}
