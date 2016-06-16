<<<<<<< 398541c6f04c57dfdb21033e543db06ada5e02e1
#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int cel;
	std::cout << "Please enter a Celsius value:";
	std::cin>>cel;
	std::cout << "Your age has " << (cel * 1.8 + 32)<< std::endl;
	return 0;
}
=======
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
>>>>>>> add lesson10
