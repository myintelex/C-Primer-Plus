#ifndef _BANKACCOUNT_
#define _BANKACCOUNT
#include <cstring>

class BankAccount
{
private:
	char name[40];
	char accnum[25];
	double balance;
public:
	BankAccount(const char * client, const char * num, double bal = 0.0);
	void show() const;
	void deposit(double cash);
	void withdraw(double cash);
};

#endif
