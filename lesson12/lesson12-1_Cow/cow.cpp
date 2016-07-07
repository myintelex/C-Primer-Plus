#include "cow.h"
#include <cstring>
#include <iostream>
using namespace std;

Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char* nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & cw)
{
	strcpy(name, cw.name);
	hobby = new char [strlen(cw.hobby) + 1];
    strcpy(hobby, cw.hobby);
    weight = cw.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & cw)
{
	strcpy(name, cw.name);
    strcpy(hobby, cw.hobby);
    weight = cw.weight;
}

void Cow::show_cow()
{
    cout << "Name: " << name << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Weight: " << weight << endl;
}
