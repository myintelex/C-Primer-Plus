#include <iostream>
#include <unistd.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string mon[12] = {"January", "February", "March", "April", "May",
     "June", "July", "August", "Sepember", "October", "November", "December" };

     int sales[12];
     int sum = 0;
     for (int i = 0; i < 12; i++)
     {
        cout << "Please input the " << mon[i]  << "`s sales : ";
        cin >> sales[i];
        sum += sales[i];
     }

     cout << "This year sales is " << sum << endl;

     for(int i =0; i < 12; i++)
     {
        cout << mon[i] << " : " << sales[i] << endl;
     }

     return 0;
}
