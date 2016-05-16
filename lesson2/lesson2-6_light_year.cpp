#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int ly;
	std::cout << "Please enter light year:";
	std::cin>>ly;
	std::cout << ly << " light year = " << (ly * 1.8 + 32)<< " astronomical units"<< std::endl;
	return 0;
}
