#include <iostream>
#include "BankAccount.h"

int main(int argc, char const *argv[])
{
	BankAccount * test = new BankAccount("zhangsan", "VIP00123", 45000);
	test->show();
	test->deposit(123.89);
	test->show();
	test->withdraw(23.89);
	test->show();
	return 0;
}
