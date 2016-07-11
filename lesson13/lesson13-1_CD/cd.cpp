#include "cd.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

Cd::Cd(const char *s1,const  char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers[0] = label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}


void Cd::report()const
{
	cout << "  Performers: " << performers << endl;
	cout << "  Label: " << label << endl;
	cout << "  Selections: " << selections << endl;
	cout << "  Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}


Classic::Classic(const char * mj,const  char *pf,const  char * lb, int n, double x):Cd(pf, lb, n, x)
{
	strcpy(major, mj);
}

Classic::Classic()
{
	major[0] = '\0';
	Cd();
}

Classic::~Classic()
{
}

void Classic::report()const
{
	cout << "  Major: " << major << endl;
	Cd::report();
}

