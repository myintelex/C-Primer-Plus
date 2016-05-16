#include <iostream>

void display(int hours, int mins)
{
	std::cout <<  "Time : " << hours << ":"<< mins << std::endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	int hours,mins;
	std::cout << "Please enter hours:";
	std::cin>>hours;
	std::cout << "Please enter mins:";
	std::cin>>mins;

	display(hours, mins);

	return 0;
}
