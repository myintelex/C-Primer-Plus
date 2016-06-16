#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a = 1, b = 0;

    while(a != 0)
    {
        cout << "Please input a number : ";
        cin >> a;
        b += a;
        cout << "The sum your have input is : " << b << endl;
    }

    return 0;

}
