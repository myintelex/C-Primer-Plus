#include "cd.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

Cd::Cd(const char *s1,const  char * s2, int n, double x)
{
	performers = new char[strlen(s1)];
	label = new char[strlen(s2)];

	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers[0] = '\0';
	label[0] = '\0';
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

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

Cd & Cd::operator=(const Cd & d)
{
	if(this == &d)
		return *this;
	delete []performers;
	delete []label;

	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}


Classic::Classic(const char * mj,const  char *pf,const  char * lb, int n, double x):Cd(pf, lb, n, x)
{
	major = new char[strlen(mj) + 1];
	strcpy(major, mj);
}

Classic::Classic():Cd()
{
	major = new char[1];
	major[0] = '\0';
}

Classic::Classic(const Classic & cl)
{
	major = new char[strlen(cl.major) + 1];
	strcpy(major, cl.major);
	Cd((Cd)cl);
}

Classic::~Classic()
{
	delete [] major;
}

void Classic::report()const
{
	cout << "  Major: " << major << endl;
	Cd::report();
}

Classic & Classic::operator=(const Classic & cl)
{
	if(this == & cl)
		return *this;
	
	Cd::operator=(cl);
	delete [] major;	
	
	major = new char[strlen(cl.major) + 1];
	strcpy(major, cl.major);
	return *this;
}


