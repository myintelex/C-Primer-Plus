#include <iostream>
using namespace std;
#include "mystring.h"

int main(int argc, char const *argv[])
{
	MyString s1(" and I am a C++ student. ");
	MyString s2 = "Please enter your name: ";
	MyString s3;
	cout << s2;
	cin >> s3;

	s2 = "My name is " + s3;
	cout << s2 << " . \n";
	s2 = s2 + s1;
	s2.stringup();

	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
		<< " 'A' characters in it.\n";
	s1 = "red";
	MyString rgb[3] = {MyString(s1), MyString("green"), MyString("blue")};
	cout << "Enter the name of a primary color for mixing light: ";
	MyString ans;
	bool success = false;
	while(cin >> ans)
	{
		ans.stringlow();
		for(int i = 0; i < 3; i++)
		{
			if(ans == rgb[i])
			{
				cout << "That`s right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye\n";
	return 0;
}
