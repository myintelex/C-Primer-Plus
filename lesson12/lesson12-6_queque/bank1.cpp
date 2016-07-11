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
	Queque * line1 = new Queque(qs);
	Queque * line2 = new Queque(qs);
	int customers_per_hour = 60;

	Item temp;
	long serverd = 0;
	long line_wait = 0;
	long wait_time1 = 0;
	long wait_time2 = 0;
	double per_wait = 2.0;

	while(per_wait > 1.0)
	{
		serverd = 0;
		line_wait = 0;
		wait_time1 = 0;
		wait_time2 = 0;

		for(int cycle = 0; cycle < 60000; cycle++)
		{
			if(newcustomer(60/customers_per_hour))
			{
				if(!line1->isfull() || !line2->isfull())
				{
					temp.set(cycle);
					if(line1->quequecount() < line2->quequecount())
					{
						line1->enqueque(temp);
					}
					else
						line2->enqueque(temp);
					
				}
			}
			if(wait_time1 <= 0 && !line1->isempty())
			{
				line1->dequeque(temp);
				wait_time1 = temp.ptime();
				line_wait += (cycle -temp.when());
				serverd++;
			}
			if(wait_time2 <= 0 && !line2->isempty())
			{
				line2->dequeque(temp);
				wait_time2 = temp.ptime();
				line_wait += (cycle -temp.when());
				serverd++;
			}
			if(wait_time1 > 0)
				wait_time1--;
			if(wait_time2 > 0)
				wait_time1--;
		}
		delete line1;
		delete line2;
		line1 = new Queque(qs);
		line2 = new Queque(qs);
		per_wait = (double)line_wait / serverd;
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