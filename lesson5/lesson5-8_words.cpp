#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char buffer[1024];
    int num = 0;
    cout << "Enter words (to stop, type the words done)" << endl;

    cin >> buffer;

    while(strcmp(buffer, "done"))
    {
        num++;
        cin >> buffer;
    }

    cout << "You entered a total of " << num << " words" << endl;
     return 0;
}
