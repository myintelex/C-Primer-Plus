#ifndef WINE_H
#define WINE_H
#include <valarray>
#include <iostream>


using namespace std;

typedef std::valarray<int> ArrayInt;
typedef pair<ArrayInt, ArrayInt> PairArray;
class Wine
{
public:
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);

    void GetBottles();
    const string Label() {return name;}
    int sum() const {return bottles.second.size();}
    void Show();

private:
    string name;
    PairArray bottles;
    int years;
};

#endif // WINE_H
