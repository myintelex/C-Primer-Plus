#include "wine.h"
#include <iostream>

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
    : name(l), years(y), bottles(ArrayInt(yr, y), ArrayInt(bot, y))
{

}

Wine::Wine(const char *l, int y)
    : name(l), years(y), bottles(ArrayInt(0, y), ArrayInt(0, y))
{

}

void Wine::GetBottles()
{
    if (years < 1)
    {
        std::cout << "No Wine Holding\n";
        return;
    }


    for (int i =0; i < years; i++)
    {
        std::cout << "Input the year: ";
        std::cin >> bottles.first[i];
        std::cout << "Input the bottles; ";
        std::cin >> bottles.second[i];
    }
}

void Wine::Show()
{
    std::cout << "Holding:\n";
    for (int i = 0; i < years; i++)
    {
        std::cout << bottles.first[i] << " : " << bottles.second[i] << std::endl;
    }
}
