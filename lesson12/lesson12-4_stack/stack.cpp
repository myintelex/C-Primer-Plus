#include "stack.h"
#include <cstring>
#include <iostream>

Stack::Stack(int n)
{
	size = n;
	pitems = new Item[size];
	top = 0;
};

Stack::Stack(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	memcpy(pitems, st.pitems, sizeof(Item) * size);
}
Stack::~Stack()
{
	delete [] pitems;
}

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
		memcpy(pitems + top, &item, sizeof(Item));
		top++;
		return true;
	}
	else
		return false;
};
bool Stack::pop(Item & item)
{
	if(top > 0)
	{
		memcpy(&item, pitems + top -1, sizeof(Item));
		top--;
		return true;
	}
	else
		return false;
};

Stack & Stack::operator=(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	memcpy(pitems, st.pitems, sizeof(Item) * size);
	return *this;
}
void Stack::show_stack()
{
	if(top == 0)
	{
		std::cout << "NO ITEMS\n";
		return;
	}
	for(int i = 0; i < top; i++)
	{
		std::cout << pitems[i].fullname << " pay: " << pitems[i].payment << '\n';
	}
}