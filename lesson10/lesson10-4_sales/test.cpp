#include <iostream>
#include "sales.h"

using namespace SALES;
int main(int argc, char const *argv[])
{
	double sales[3] = {123, 254, 12.3};
	Sales s(sales, 3);
	Sales s1(s);
	s.showSales();
	s1.showSales();

	return 0;
}
