#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <valarray>
using namespace std;

class Wine : private::string, private::pair<valarray<int>, valarray<int>>
{
public:
    Wine(char *l, int y);
    Wine(char *l, int y, int yr[], int bot[]);

    void GetBottles();
    const string & Label() {return (const string &)(*this);}
    int sum() const {return PairArray::second.sum();}
    void Show();

private:
    typedef valarray<int> ArrayInt;
    typedef pair<ArrayInt, ArrayInt> PairArray;
    int years;
};

#endif // WINE_H
