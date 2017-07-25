#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string>
using namespace std;
class Worker
{
private:
    string name;
    int Id;
public:
    Worker(){}
    Worker(string name, int id):name(name), Id(id){}
    void show(){cout << name <<":" << Id << endl;}
    void set();
};

#endif // WORKER_H
