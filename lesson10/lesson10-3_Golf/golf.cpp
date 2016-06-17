#include <iostream>
#include <cstring>
#include "golf.h"
Golf::Golf()
{}
Golf::Golf(const char * m_fullname, int m_handicap)
{
	strcpy(fullname, m_fullname);
	handicap = m_handicap;
}

void Golf::setgolf()
{
	std::cout << "Input your fullname: ";
	std::cin >> fullname;
	std::cout << "Input your handicap: ";
	std::cin >> handicap;
}

void Golf::sethandicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf()
{
	std::cout << "FullName: " << fullname << "    Handicap:" << handicap << std::endl;
}