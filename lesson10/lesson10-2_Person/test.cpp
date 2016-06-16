#include "person.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	using std::cout;
	using std::endl;

	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.show();
	cout << endl;
	three.FormalShow();
	cout << endl;
	return 0;
}
