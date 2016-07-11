#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queque.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[])
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));

	cout << "Case Study: Bank of Heather Automatic Teller.\n";
	cout << "Enter maxinum size of queque: ";
	int qs;
	cin >> qs;
	Queque * line = new Queque(qs);

	int customers_per_hour = 60;

	Item temp;
	long serverd = 0;
	long line_wait = 0;
	long wait_time = 0;
	double per_wait = 2.0;

	while(per_wait > 1.0)
	{
		serverd = 0;
		line_wait = 0;
		wait_time = 0;

		for(int cycle = 0; cycle < 60000; cycle++)
		{
			if(newcustomer(60/customers_per_hour))
			{
				if(!line->isfull())
				{
					temp.set(cycle);
					line->enqueque(temp);
				}
			}
			if(wait_time <= 0 && !line->isempty())
			{
				line->dequeque(temp);
				wait_time = temp.ptime();
				line_wait += (cycle -temp.when());
				serverd++;
			}
			if(wait_time > 0)
				wait_time--;
		}
		delete line;
		line = new Queque(qs);
		per_wait = (int)line_wait / serverd;
		customers_per_hour--;
	}

	cout << "The customers arrived per hour must less than:" <<  customers_per_hour+1 << '\n';
	cout << "Done~\n";
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x/ RAND_MAX < 1);
}