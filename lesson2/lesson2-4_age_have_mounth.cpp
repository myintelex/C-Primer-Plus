#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int age;
	int month;
	std::cout << "Please input you age:";
	std::cin>>age;
	std::cout << "Your age has " + (age * 12)<< std::endl;
	return 0;
}