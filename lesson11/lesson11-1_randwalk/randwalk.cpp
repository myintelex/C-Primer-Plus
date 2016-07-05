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
	double target;
	double dstep;

	ofstream outFile;
	outFile.open("./info.txt");
	cout << "Enter target distance (q to quit) : ";
	while(cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		outFile << "Target Distance: " << target << " , Step Size: 20 \n";

		while(result.magval() < target)
		{
			outFile << steps << ": (x, y) = ( " << step.xval() << ", " << step.yval() << " )\n";
			direction  = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		outFile << steps << ": (x, y) = ( " << step.xval() << ", " << step.yval() << " )\n";
		outFile << "After " << steps << " steps, the subject has the following location \n";
		outFile << result << endl;
		result.polar_mode();
		outFile << "or \n" << result << endl;
		outFile << "Average outward distance per step = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit) : ";
	}
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;
	return 0;
}

