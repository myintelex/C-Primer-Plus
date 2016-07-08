#ifndef _STONEWT_H_
#define _STONEWT_H_
class Stonewt
{
public:
	enum Mode {STONE, FPOUND, IPOUND};
private:
	enum{Lbs_per_stn = 14};	
	int stone;
	double pds_left;
	double pounds;
	int pounds_int;
	Mode mode;
public:
	Stonewt(double lbs, Mode md = STONE);
	Stonewt(int stn, double lbs, Mode md = STONE);
	Stonewt();
	~Stonewt();
	Stonewt operator+(const Stonewt & st);
	Stonewt operator-(const Stonewt & st);
	Stonewt operator*(const double n);
	bool operator<(const Stonewt & st);
	bool operator>(const Stonewt & st);
	bool operator!=(const Stonewt & st);
	bool operator==(const Stonewt & st);
	bool operator<=(const Stonewt & st);
	bool operator>=(const Stonewt & st);
	friend Stonewt operator*(double n, const Stonewt & st);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif
