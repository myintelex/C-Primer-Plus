#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    double tvarps, lord = 0;
    
        cout << "Please input the number of you tvarps:";
    while(cin >> tvarps && tvarps > 0)
    {
        if(tvarps > 5000)
           lord = (tvarps - 5000) * 0.1;        
        if(tvarps > 15000)
            lord = lord + (tvarps - 15000) * 0.05;
        if(tvarps > 30000)
            lord = lord + (tvarps - 35000) * 0.05;
        cout << "Your lord is " << lord << endl;
        lord = 0;
        cout << "Please input the number of you tvarps:";
    }    
}
