#ifndef ABC_DMA_H_
#define ABC_DMA_H_

class ABC
{
private:
	char * fullname;
	int level;
public:
	ABC(const char * s = "null", const int n = 0);
	ABC(const ABC & a);
	virtual ~ABC();
	ABC & operator=(const ABC & a);
	virtual void display() = 0;
};

class baseDMA:public ABC
{
private:
	char * label;
	int rating;
public:
    baseDMA(const char * l = "null", const char * fn = "null", const int lv = 0, int r = 0);
	baseDMA(const baseDMA & a);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	virtual void display(); 
};

class lackDMA:public ABC
{
private:
	enum {COL_LEN = 40};
	char color[COL_LEN];
public:
	lackDMA(const char * c = "blank", const char * fn = "null", const int lv = 0);
	lackDMA(const lackDMA & a);
	lackDMA & operator=(const lackDMA & la);
	virtual void display();
};

class hasDMA:public ABC
{
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char * fn = "null", const int lv = 0);
	hasDMA(const hasDMA & a);
	hasDMA & operator=(const hasDMA & ha);
	virtual ~hasDMA();
	virtual void display();
};

#endif
