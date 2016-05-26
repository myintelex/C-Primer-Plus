#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    char ch;
    double buffer[10];
    double sum = 0, average = 0;
    int count = 0;
    int i = 0;
    while((cin >> buffer[i]) && (i < 10))
    {
        sum+=buffer[i];
        i++;       
    }


    if(i != 0)
        average = sum / i;

    for(int j = 0; j < i; j++)
    {
        if(buffer[j]> average)
        {
            count++;
        }
    }
    cout << "The average is:"<< average<<" and there has " << count << " large than average"
    << endl;

     return 0;
}
