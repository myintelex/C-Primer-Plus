#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int num;
    cout << "Enter number of rows: " << endl;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = (num - i - 1); j > 0; j--)
        {
            cout << ".";
        }
        for(int k = 0; k < (i +1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

     return 0;
}
