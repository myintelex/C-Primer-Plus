#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	double dis_of_long;
	double dis_of_yard;
	std::cout << "Please input the distance:";
	std::cin>>dis_of_long;
	dis_of_yard = dis_of_long / 220;
	std::cout << "The distance is " <<dis_of_yard<< std::endl;
	return 0;
}