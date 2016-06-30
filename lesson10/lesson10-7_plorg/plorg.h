#ifndef _PLORG_H_
#define _PLORG_H_

class Plorg
{
private:
	char m_name[19];
	int m_CI;
public:
	Plorg(const char * name = "Plorga");
	void reset_CI(int CI) ;
	void report() const;
};

#endif
