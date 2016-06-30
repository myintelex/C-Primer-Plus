#include "simplist.h"
#include <iostream>

using namespace  std;
void showitem(Item & ite);
int main(int argc, char const *argv[])
{
	Simplist newlist;
	double str;
	newlist.add(123);
	cout << "Input the double: ";
	while(cin >> str &&!newlist.isfull())
	{
		cout << "Input the double: ";
		newlist.add(str);
	}
	newlist.visit(showitem);

	return 0;
}

void showitem(Item & ite)
{
	cout << "Item: " << ite << endl;
}
