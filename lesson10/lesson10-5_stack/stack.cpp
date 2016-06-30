#include "stack.h"
#include <cstring>

Stack::Stack()
{
	top = 0;
};
bool Stack::isempty() const
{
	return top == 0;
};
bool Stack::isfull() const
{
	return top == MAX;
};
bool Stack::push(const Item & item)
{
	if(top < MAX)
	{
		strcpy(items[top++].fullname,item.fullname);
		items[top].payment = item.payment;
		return true;
	}
	else
		return false;
};
bool Stack::pop(Item & item)
{
	if(top > 0)
	{
		strcpy(item.fullname, items[--top].fullname);
		return true;
	}
	else
		return false;
};
