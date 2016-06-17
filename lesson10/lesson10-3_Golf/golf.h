#ifndef _GOLF_
#define _GOLF_

#include <iostream>

class Golf
{
private:
	enum Len
	{
		Len = 40,
	};
	char fullname[Len];
	int handicap;
public:
	Golf();
	Golf(const char * m_fullname, int m_handicap);
	void setgolf();
	void sethandicap(int hc);
	void showgolf();
};

#endif