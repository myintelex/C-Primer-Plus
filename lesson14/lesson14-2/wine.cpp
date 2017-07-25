#include "wine.h"

Wine::Wine(char *l, int y)
    : string(l), years(y), PairArray(ArrayInt(0, y), ArrayInt(0, y))
{

}

Wine::Wine(char *l, int y, int yr[], int bot[])
    : string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{

}

void Wine::GetBottles()
{
    if (years < 1)
    {
        cout << "There no Wine\n";
        return ;
    }

    for (int i = 0; i < years; i++)
    {
        cout << "Input the year:";
        cin >> this->first[i];
        cout << "Input the bottles:";
        cin >> this->second[i];

    }
}

void Wine::Show()
{
    cout  << (string)*this << "have bottles:\n";
    for (int i = 0; i < years; i++)
    {

        cout << this->first[i] << " : " << this->second[i] << "\n";

    }
}
