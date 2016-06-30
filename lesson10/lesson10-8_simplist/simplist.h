#ifndef SIMPLIST_H_
#define SIMPLIST_H_

typedef double Item;

class Simplist
{
private:
	enum {MAX = 30};
	Item items[MAX];
	int top;
public:
	Simplist(){top =  0;};

	bool isempty() const{return top == 0;};
	bool isfull() const{return top == MAX;};
	bool add(const Item &ite);
	void visit(void (*pf)(Item &));
};

#endif
