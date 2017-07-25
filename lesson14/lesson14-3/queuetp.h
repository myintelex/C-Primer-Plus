#ifndef QUEUETP_H
#define QUEUETP_H

#include <iostream>
#include <string>

template <typename T>
class QueueTp
{
private:
    struct Node {T item; struct Node * next;};
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    QueueTp (const QueueTp &q):qsize(0){}
    QueueTp &operator = (const QueueTp &q) {return *this;}

public:
    QueueTp(int qs = 10):qsize(qs){ front = rear = NULL; items = 0;}
    ~QueueTp();
    bool isempty()const;
    bool isfull()const;
    int  queuecount()const {return items;}
    bool enqueue(const T &item);
    bool dequeue(T &item);
};

template<typename T>
QueueTp<T>::~QueueTp()
{
    Node *temp = front;
    while(items > 0)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}
\
template<typename T>
bool QueueTp<T>::isempty() const
{
    return (items == 0) ? true : false;
}

template<typename T>
bool QueueTp<T>::isfull() const
{
    return (items < qsize) ? false : true;
}

template<typename T>
bool QueueTp<T>::enqueue(const T &item)
{
    if (isfull())
        return false;

    Node * temp = new Node;
    temp->item = item;
    temp->next = NULL;

    if (front == NULL)
        front = temp;
    else
        rear->next = temp;

    items++;
    rear = temp;
    return true;
}

template<typename T>
bool QueueTp<T>::dequeue(T &item)
{
    if (isempty())
        return false;

    item = front->item;
    item--;
    Node * temp = front;
    front = front->next;
    delete front;
    if (items == 0)
        rear = NULL;
    return true;

}






#endif // QUEUETP_H
