#include "port.h"
#include <cstring>
#include <iostream>

Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port &p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port &p)
{
	if(this == &p)
		return *this;
	delete [] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
}

Port & Port::operator-=(int b)
{
	bottles -= b;
}

void Port::show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream & operator<< (ostream &os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}


VintagePort::VintagePort():Port("none", "Vintage", 0)
{
	
	nickname = new char[5];
	strcpy(nickname, "none");
	year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char *nm, int y):Port(br, "Vintage", b)
{
	nickname = new char[strlen(nm) + 1];
	strcpy(nickname, nm);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this == &vp)
		return *this;

	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::show()const
{
	Port::show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & p)
{
	os << (Port)p << ", " << p.nickname << ", " << p.year;
	return os;
}
