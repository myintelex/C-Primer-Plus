#include "plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char * name)
{
	strcpy(m_name, name);
	m_CI = 50;
}
void Plorg::reset_CI(int CI) 
{
	m_CI = CI;
}
void Plorg::report() const
{
	std::cout << "The Plorg name is : " << m_name << std::endl;	
	std::cout << "The Plorg CI is : " << m_CI << std::endl;
}
