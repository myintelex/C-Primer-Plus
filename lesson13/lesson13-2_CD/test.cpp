#include <iostream>
#include "cd.h"

using namespace std;
void bravo(const Cd & disk);

int main(int argc, char const *argv[])
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd * pcd = &c1;

	cout << "Using object directly: \n";
	c1.report();
	c2.report();

	cout << "Using type cd * pointer to object:\n";
	pcd->report();
	pcd = & c2;
	pcd->report();

	cout << "Calling a function with a Cd reference argument: \n";
	bravo(c1);
	bravo(c2);

	cout << "Testing assigment: \n";
	Classic copy;
	copy = c2;
	copy.report();

	return 0;
}

void bravo(const Cd & disk)
{
	disk.report();
}