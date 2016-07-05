#include <iostream>
using std::cout;
using std::cin;
#include "stonewt.h"

int main(int argc, char const *argv[])
{
	Stonewt arr[6];
	arr[1] = 25.6;
	arr[0] = Stonewt(25, 2);
	arr[2] = 25;
	double dt;

	cout << "Please input the 4th arr: ";
	cin >> dt;
	arr[3] = dt;
	cout << "Please input the 5th arr: ";
	cin >> dt;
	arr[4] = dt;
	cout << "Please input the 6th arr: ";
	cin >> dt;
	arr[5] = dt;

	Stonewt temp = Stonewt(11, 0);
	Stonewt min = arr[1];
	Stonewt max = arr[1];
	int total = 0;
	for(int i = 0; i < 6; i++)
	{
		if(arr[i] < min)
			min = arr[i];

		if(arr[i] > max)
			max = arr[i];

		if(arr[i] >= temp)
		{
			//cout << arr[i];
			total++;
		}
	}
	cout << "The min in the 6 is : " << min ;
	cout << "The max in the 6 is: " << max ;
	cout << "There has " << total << " weighter than 11 stones. \n";
	return 0;
}