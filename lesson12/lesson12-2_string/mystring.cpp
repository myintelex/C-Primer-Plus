#include "mystring.h"
#include <cstring>

using std::cin;
using std::cout;

int MyString::num_strings = 0;

int MyString::HowMany()
{
	return num_strings;
}

MyString::MyString(const char *s)
{
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
	num_strings;
}

MyString::MyString()
{
	len = 4;
	str = new char [1];
	str[0] = '\0';
	num_strings;
}

MyString::MyString(const MyString & st)
{
	num_strings++;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
}

MyString::~MyString()
{
	--num_strings;
	delete[] str;
}

MyString & MyString::operator=(const MyString &st)
{
	if(this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
	return * this;
}

MyString & MyString::operator=(const char *s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
	return * this;
}

char & MyString::operator[](int i)
{
	return str[i];
}

bool operator<(const MyString & st, const MyString & st2)
{
	return (std::strcmp(st.str, st2.str) < 0);
}

bool operator>(const MyString & st, const MyString & st2)
{
	return (st2 < st);
}

bool operator==(const MyString & st, const MyString & st2)
{
	return (std::strcmp(st.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const MyString & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, MyString & st)
{
	char temp[MyString::CINLIM];
	is.get(temp, MyString::CINLIM);
	if(is)
		st = temp;
	while(is && is.get() != '\n')
		continue;
	return is;
}

MyString operator+(const MyString &s1, const MyString &s2)
{
	char * temp;
	int lens = std::strlen(s1.str) + std::strlen(s2.str);
	temp = new char [lens + 1];
	std::strcpy(temp, s1.str);
	std::strcat(temp, s2.str);
	return MyString(temp);
}

MyString MyString::operator+(const char *s)
{
	MyString temp(s);
	temp = temp + *this;
	return temp;
}

MyString operator+(const char * s1, MyString & s2)
{
	MyString temp;
	temp = s2 + s1;
	return temp;
}

void MyString::stringlow()
{
	int i = 0;
	for(int i = 0; i < len; i++)
	{
		if(isupper(str[i]))
			str[i] = tolower(str[i]);
	}

}

void MyString::stringup()
{
	int i = 0;
	for(int i = 0; i < len; i++)
	{
		if(islower(str[i]))
			str[i] = toupper(str[i]);
	}

}

int MyString::has(const char ch) const
{
	int i = 0;
	int j = 0;
	while(i < len)
	{
		if(str[i] == ch)
		{
			j++;
		}
		i++;
	}
	return j;
}