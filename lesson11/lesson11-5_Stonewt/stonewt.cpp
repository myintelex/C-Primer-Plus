#include <iostream>
#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs, Mode md)
{
	mode  = md;
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	pounds_int = (int)lbs;	
}

Stonewt::Stonewt(int stn, double lbs, Mode md)
{
	mode = md;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	pounds_int = stn * Lbs_per_stn + (int)lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = pounds_int = 0;	
}

Stonewt::~Stonewt()
{
}

Stonewt Stonewt::operator+(const Stonewt & st)
{
	return Stonewt(pounds + st.pounds, mode);
}

Stonewt Stonewt::operator-(const Stonewt & st)
{
	return Stonewt(pounds - st.pounds, mode);
}

Stonewt Stonewt::operator*(const double n)
{
	return Stonewt(pounds * n, mode);
}

Stonewt operator*(double n, const Stonewt & st)
{
	return Stonewt(st.pounds * n, st.mode);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if(st.mode == Stonewt::STONE)
	{
		os << st.stone << " stones, " << st.pds_left << " pounds.\n";
	}
	else if(st.mode  == Stonewt::FPOUND)
	{
		os << st.pounds << " pounds.\n";
	}
	else if(st.mode == Stonewt::IPOUND)
	{
		os << st.pounds_int << " pounds. \n";
	}
	else
	{
		os << "Error in type.\n";
	}
}