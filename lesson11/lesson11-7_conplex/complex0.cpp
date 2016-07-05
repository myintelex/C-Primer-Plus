#include "complex0.h"

complex::complex()
{
	real_part = 0.0;
	imagenary_part = 0.0;	
}

complex::complex(const double a, const double b)
{
	real_part = a;
	imagenary_part = b;
}

complex complex::operator+(const complex & cm)
{
	return complex(real_part + cm.real_part, imagenary_part + cm.imagenary_part);
}

complex complex::operator-(const complex & cm)
{
	return complex(real_part - cm.real_part, imagenary_part - cm.imagenary_part);
}

complex complex::operator*(const complex & cm)
{
	return complex(((real_part * cm.real_part) - (imagenary_part * cm.imagenary_part)) , ((real_part * cm.imagenary_part) + (imagenary_part  * cm.real_part)));
}

complex complex::operator*(double & db)
{
	return complex(real_part*db, imagenary_part*db);
}

complex operator*(double db, complex & cm)
{
	return complex(cm.real_part * db, cm.imagenary_part * db);
}

complex operator*(int db, complex & cm)
{
	return complex(cm.real_part * db, cm.imagenary_part * db);
}

complex operator~(complex & cm)
{
	return complex(cm.real_part, -cm.imagenary_part);
}

std::ostream & operator<<(std::ostream &os, const complex & cm)
{
	os << "(" << cm.real_part << ", " << cm.imagenary_part << "i)";
	return os;
}
std::istream & operator>>(std::istream &is, complex & cm)
{
	std::cout << "Real: ";
	if(is >> cm.real_part)
	{
		std::cout << "Imagenary: ";
		is>> cm.imagenary_part;
	}
	
	return is;
}