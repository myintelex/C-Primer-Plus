#ifndef QUEQUE_H_
#define QUEQUE_H_
class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer(){arrive = processtime = 0;};
	void set(long when);
	long when()const {return arrive;};
	int ptime()const {return processtime;};
};

typedef Customer Item;

class Queque
{
private:
	struct Node{Item item; struct Node * next;};
	enum{Q_SIZE = 10};

	Node * front;
	Node * rear;
	int items;
	const int qsize;
	Queque(const Queque & q):qsize(0){};
	Queque & operator=(const Queque & q){return *this;};
public:
	Queque(int qs = Q_SIZE);
	~Queque();
	bool isempty()const;
	bool isfull()const;
	int quequecount()const;
	bool enqueque(const Item &item);
	bool dequeque(Item &item);
};

#endif