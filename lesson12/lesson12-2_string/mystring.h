#ifndef MYSTRING_H_
#define MYSTRING_H_
#include <iostream>
using std::ostream;
using std::istream;

class MyString
{
private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	MyString(const char *s);
	MyString();
	MyString(const MyString & s);
	~MyString();
	
	int length() const {return len;};
	
	MyString & operator=(const MyString &);
	MyString & operator=(const char *);
	char & operator[](int i);

	friend bool operator<(const MyString & st, const MyString & st2);
	friend bool operator>(const MyString & st, const MyString & st2);
	friend bool operator==(const MyString & st, const MyString & st2);
	friend ostream & operator<<(ostream & os, const MyString & st);
	friend istream & operator>>(istream & is, MyString & st);

	friend MyString  operator+(const MyString &s1, const MyString &s2);
	MyString  operator+(const char * s);
	friend MyString  operator+(const char * s,MyString & s2);
	void stringlow();
	void stringup();
	int has(const char ch) const;


	static int HowMany();
};

#endif