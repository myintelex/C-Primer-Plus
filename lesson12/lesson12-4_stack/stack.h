//stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum {MAX = 10};
	Item * pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);
	bool pop(Item & item);
	Stack & operator=(const Stack & st);
	void show_stack();
};

#endif
