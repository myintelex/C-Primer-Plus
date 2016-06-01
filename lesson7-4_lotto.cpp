#include <iostream>

using namespace std;
double probability(double blue, double choices, double red);


int main(int argc, char const *argv[])
{
    double blue, red, choices;
    cout << "Enter the total number of red balls and blue  balls on the game and\n"
                    "the number of picks allowed:\n";
    while((cin >> red >> blue >> choices ) && choices <= blue)
    {
        cout << "You have one chance in ";
        cout << probability(blue, choices, red);
        cout << "  of winning. \n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;

    
    return 0;
}

double probability(double blue, double choices, double red)
{
    long double result = 1.0;
    long double b;
    double n;
    for(b = blue, n = choices; n > 0; n--, b--)
    {
        result = result * b / n;
    }
    return result * red;
}