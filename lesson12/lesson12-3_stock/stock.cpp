#include <iostream>
#include "stock.h"
#include <cstring>

Stock::Stock()
{
	company = new char[7];
	strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char *nm, long n, double pr)
{
	company = new char[strlen(nm)];
	strcpy(company, nm);

	if(n < 0)
	{
		std::cout << "Number of shares can`t be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tol();
}

Stock::~Stock()
{
	delete [] company;
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can`t be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tol();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout ;
	if(num < 0)
	{
		cout << "Number of shares can`t be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "Number of shares can`t be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tol();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tol();
}

ostream & operator<<(ostream & os, const Stock & st)
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = 
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	os << "Company: " << st.company << " Shares: " << st.shares << '\n' 
		<< " Share Price: $" << st.share_val;
	cout.precision(2);
	os << " Total Worth: $" << st.total_val << '\n';

}
const Stock & Stock::topval(const Stock & s)const
{
	if(s.total_val >total_val)
		return s;
	else
		return *this;
}