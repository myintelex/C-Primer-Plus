#include "person.h"
#include <iostream>
#include <cstring>


Person::Person(const string & ln, const char * fn )
{
	lname = ln;
	strncpy(fname, fn, LIMIT);
}

void Person::show() const
{
	std::cout << "Name: " << fname << "." << lname << std::endl; 
}

void Person::FormalShow() const
{
	std::cout << "Name: " << lname << "." << fname << std::endl; 
}
