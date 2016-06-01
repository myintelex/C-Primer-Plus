#include <iostream>

using namespace std;
double factorial(int num);


int main(int argc, char const *argv[])
{
    int num;
    cout << "Input your num: ";
    while((cin >> num) && (num > 0))
    {
        cout << "The factorial: " << factorial(num)  << endl;
        cout << "Input your num: ";
    }

    cout << "Bye.\n";    
    return 0;
}

double factorial(int num)
{
    if(num < 2)
        return 1;
    else
        return num*factorial(num-1);
}