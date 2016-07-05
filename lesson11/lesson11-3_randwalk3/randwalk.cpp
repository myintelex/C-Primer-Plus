#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(int argc, char const *argv[])
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	unsigned long steps_MAX = 0;
	unsigned long steps_MIN = 0;
	unsigned long steps_ALL = 0;
	unsigned long times = 0;
	double target;
	double dstep;

	cout << "Enter target distance (q to quit) : ";
	while(cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout << "Enter test times: ";
		if(!(cin >> times))
			break;

		cout << "Target Distance: " << target << " , Step Size: "  << dstep << ", Test times: " << times << ".\n";
		while(result.magval() < target)
		{
			direction  = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		steps_MIN = steps_MAX = steps_ALL = steps;
		steps = 0;
		result.reset(0.0, 0.0);

		for(int i = 0; i < times-1; i++)
		{
			while(result.magval() < target)
			{
				direction  = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			steps_MIN = (steps_MIN > steps) ? steps : steps_MIN;
			steps_MAX = (steps_MAX < steps) ? steps : steps_MAX;
			steps_ALL+=steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}

		cout <<"In " << times << "`s test, The min steps is: " << steps_MIN << endl;
		cout <<"In " << times << "`s test, The max steps is: " << steps_MAX << endl;
		cout <<"In " << times << "`s test, The average steps is: " << steps_ALL/times << endl;
		cout << "Enter target distance (q to quit) : ";
	}
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;
	return 0;
}

