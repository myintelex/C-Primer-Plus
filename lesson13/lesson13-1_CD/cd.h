#ifndef _CD_H_
#define _CD_H_
class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char *s1,const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	~Cd(){};
	void report()const;
	Cd & operator=(const Cd & d);
};

class Classic:public Cd
{
private:
	char major[50];
public:
	Classic(const char * mj,const char *pf,const char * lb, int n, double x);
	Classic();
	~Classic();
	void report()const;
};
#endif