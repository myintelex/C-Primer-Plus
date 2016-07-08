#include "queque.h"
#include <cstdlib>

Queque::Queque(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queque::~Queque()
{
	Node * temp;
	while(front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queque::isempty()const
{
	return items == 0;
}

bool Queque::isfull()const
{
	return items == qsize;
}

int Queque::quequecount()const
{
	return items;
}

bool Queque::enqueque(const Item &item)
{
	if(isfull())
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if(front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return rear;
}

bool Queque::dequeque(Item &it)
{
	if (front == NULL)
		return false;
	it = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if(items == 0)
		rear = NULL;
	return true;
}

void Customer::set(long when)
{
	processtime = std::rand()%3 + 1;
	arrive = when;
}


