#include <iostream>

int main()
{
    using namespace std;
    const int ArcSize = 20;
    string name;
    string dessert;

    cout << "Enter you name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
