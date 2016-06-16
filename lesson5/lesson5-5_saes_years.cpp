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
     string years[3] = {"first", "second", "third"};
     int sales[3][12];
     int sum = 0;
     for (int i = 0; i < 36; i++)
     {
        cout << "Please input the " << years[i / 12] << " years " << mon[i % 12]  << "`s sales : ";
        cin >> sales[i / 12][i % 12];
        sum += sales[i / 12][i % 12];
     }

     cout << "This year sales is " << sum << endl;

     for(int i =0; i < 36; i++)
     {
        cout <<  "the" << years[i / 12] << " " << mon[i % 12] << " : " << sales[i / 12][i % 12] << endl;
     }

     return 0;
}
