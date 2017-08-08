#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    while(1)
    {
        cout << "Please Input the String(q for quit): " << endl;
        string str;
        getline(cin, str);

        for(string::iterator iter = str.begin();
            iter != str.end();
            iter++)
        {
            if (isalpha(*iter))
            {
                *iter = tolower(*iter);
            }
            else
            {
                str.erase(iter);
                iter--;
            }
        }
        string temp = str;
        reverse(str.begin(), str.end());
        if (temp == str)
            cout << "This is reverse words.\n";
        else
            cout << "It`s not reverse words.\n";

        if (temp == "q")
            break;
    }
    cout << "Bye!\n";

    return 0;
}
