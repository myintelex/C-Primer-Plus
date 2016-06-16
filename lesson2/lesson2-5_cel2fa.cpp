#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int cel;
	int fa;
	std::cout << "Please enter a Celsius value:";
	std::cin>>cel;
	std::cout << "Your age has " + (cel * 1.8 + 32)<< std::endl;
	return 0;
}