<<<<<<< 398541c6f04c57dfdb21033e543db06ada5e02e1
#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int age;
	int month;
	std::cout << "Please input you age:";
	std::cin>>age;
	std::cout << "Your age has "<< (age * 12) << "month "<< std::endl;
	return 0;
}
=======
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
>>>>>>> add lesson10
