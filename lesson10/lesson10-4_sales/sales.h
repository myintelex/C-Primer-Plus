#ifndef _SALES_
#define _SALES_
#include <iostream>

namespace SALES
{
	class Sales
	{
	private:
		int count;
		enum{QUARTERS = 4};
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
	public:
		Sales(const double ar[], int n);
		Sales(Sales & s);
		double * get_sales(){return m_sales;};
		int get_count(){return count;}
		void showSales();
	};
}


#endif
