#include "abc_dma.h"
#include <iostream>
#include <cstring>

ABC::ABC(const char * s, const int n)
{
	fullname = new char[strlen(s) + 1];
	strcpy(fullname, s);
	level = n;
}

ABC::ABC(const ABC & a)
{
	fullname = new char[strlen(a.fullname) + 1];
	strcpy(fullname, a.fullname);
	level = a.level;
}

ABC::~ABC()
{
	delete [] fullname;
}

ABC & ABC::operator=(const ABC & a)
{
	delete [] fullname;
	fullname = new char[strlen(a.fullname)];
	strcpy(fullname, a.fullname);
	level = a.level;
	return *this;
}

void ABC::display()
{
	std::cout << "FULLNAME: " << fullname << "  LEVEL: " << level << std::endl;
}

baseDMA::baseDMA(const char * l, const char * fn, const int lv, const int r):ABC(fn, lv)
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}

baseDMA::baseDMA(const baseDMA & ba):ABC(ba)
{
	label = new char[strlen(ba.label) + 1];
	strcpy(label, ba.label);
	rating = ba.rating;
}

baseDMA::~baseDMA()
{
	delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if(this == &rs)
		return *this;
	ABC::operator=(rs);
	delete [] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

void baseDMA::display()
{
	ABC::display();
	std::cout << "LABEL: " << label << "  RATING: " << rating << std::endl;
}


lackDMA::lackDMA(const char * c, const char * fn, const int lv):ABC(fn, lv)
{
	strcpy(color, c);
}

lackDMA::lackDMA(const lackDMA & a):ABC(a)
{
	strcpy(color, a.color);
}

lackDMA & lackDMA::operator=(const lackDMA & la)
{
	if(this == &la)
		return *this;
	ABC::operator=(la);
	strcpy(color, la.color);
}

void lackDMA::display()
{
	ABC::display();
	std::cout << "COLOR: " << color << std::endl;
}

hasDMA::hasDMA(const char * s, const char * fn, const int lv):ABC(fn, lv)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
	
hasDMA::hasDMA(const hasDMA & a):ABC(a)
{
	style = new char[strlen(a.style) + 1];
	strcpy(style, a.style);
}

hasDMA & hasDMA::operator=(const hasDMA & ha)
{
	if(this == &ha)
		return *this;
	ABC::operator=(ha);
	delete [] style;
	style = new char[strlen(ha.style) + 1];
	strcpy(style, ha.style);
	return *this;
}


hasDMA::~hasDMA()
{
	delete [] style;
}

void hasDMA::display()
{
	ABC::display();
	std::cout << "STYLE: " << style << std::endl;
}

