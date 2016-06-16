#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b;
    int sum = 0;
    cout << "Please input the  first number: ";
    cin >> a;
    cout << "Please input the last number: ";
    cin >> b;

    for(int i = a; i < b; i++)
    {
        sum += i;
    }

    cout << "The answer is " << sum << endl;


    return 0;

}
