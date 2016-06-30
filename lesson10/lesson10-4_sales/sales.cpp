#include "sales.h"
namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		count = n < 4 ? n : 4;
		double total = 0;
		m_max = ar[0];
		m_min = ar[0];
		for(int i = 0; i < count; i++)
		{
			m_sales[i] = ar[i];
			total += ar[i];
			if(m_min > ar[i])
				m_min = ar[i];
			if(m_max < ar[i])
				m_max = ar[i];
		}
		m_average = total / count;
	}
	Sales::Sales(Sales & s)
	{
		count = s.get_count() < 4 ? s.get_count() : 4;
		double total = 0;
		m_max = s.get_sales()[0];
		m_min = s.get_sales()[0];
		for(int i = 0; i < count; i++)
		{
			m_sales[i] = s.get_sales()[i];
			total += s.get_sales()[i];
			if(m_min > s.get_sales()[i])
				m_min = s.get_sales()[i];
			if(m_max < s.get_sales()[i])
				m_max = s.get_sales()[i];
		}
		m_average = total / count;
	}
	void Sales::showSales()
	{
		using std::cout;
		using std::endl;
		cout << "The sales is : \n" ;
		for(int i = 0; i < count; i++)
		{
			cout << m_sales[i] << endl;
		}
		cout << "The average is " << m_average << endl;
		cout << "The max is " << m_max << endl;
		cout << "The min is " << m_min << endl;
	}
}
