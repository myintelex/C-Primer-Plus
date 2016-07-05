#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <iostream>
class complex
{
private:
	double real_part;
	double imagenary_part;
public:
	complex(const double a, const double b);
	complex();
	complex operator+(const complex & cm);
	complex operator-(const complex & cm);
	complex operator*(const complex & cm);
	complex operator*(double & db);
	friend complex operator*(double db, complex & cm);
	friend complex operator*(int db, complex & cm);
	friend complex operator~(complex & cm);
	friend std::ostream & operator<<(std::ostream &os, const complex & cm);
	friend std::istream & operator>>(std::istream &is, complex & cm);
};
#endif