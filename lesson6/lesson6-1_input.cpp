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
    cin>>ch;
    while(ch != '@')
    {
        if (isdigit(ch))
            ;
        else if(isalpha(ch))
        {
            if(islower(ch))
            {
                ch = toupper(ch);
                cout<< ch;
            }
            else
            {
                ch = tolower(ch);
                cout<<ch;
            }
        }
        else
            cout<<ch;
        // cout<<ch;
        cin>>ch;
    }

     return 0;
}
