#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string temp;
    int num = 0;
    cout << "Enter words (to stop, type the words done)" << endl;

    cin >> temp;

    while(temp != "done")
    {
        num++;
        cin >> temp;
    }

    cout << "You entered a total of " << num << " words" << endl;
     return 0;
}
