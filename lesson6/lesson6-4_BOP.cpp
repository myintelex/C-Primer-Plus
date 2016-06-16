#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int strsize = 32;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    char flag;
    bop user[9] = 
    {
        {"xiaoming ", "Programers", "XM", 1},
        {"xiaohong ", "cheefer", "red", 2},
        {"xiaolan ", "CEO", "blue", 3},
        {"xiaolv ", "CTO", "green", 2},
        {"xiaozi ", "CFO", "child", 3},
        {"xiaozhang ", "CIO", "OPEN", 1},
        {"xiaoli ", "CCO", "leave", 2},
        {"xiaomao ", "COO", "cat", 1},
        {"xiaogou ", "CPO", "dog", 2}
    };
    cout << "Benevolent Order of Programers Report" << endl;
    cout << "a. display by name          b. display by title" << endl;
    cout << "c. display by bopname    d. display by preference" << endl;
    cout << "q. quit" << endl;


    while(1)
    {
        cout << "Enter your choice : " ;
        cin >> flag;
        for(int i = 0; i < 9; i++)
        {
            switch(flag)
            {
            case 'a':
                cout << user[i].fullname << endl;
                break;
            case 'b':
                cout << user[i].title << endl;
                break;            
            case 'c':
                cout << user[i].bopname << endl;
                break;            
            case 'd':
                switch(user[i].preference)
                {
                case 1:
                    cout << user[i].fullname << endl;
                    break;                
                case 2:
                    cout << user[i].title << endl;
                    break;                
                case 3:
                    cout << user[i].bopname << endl;
                    break;                
                default:
                    break;
                }
                break;            
            case 'q':
                cout << "Bye!\n";
                return 0;
            default:
                break;
            }
        }
    }

    
}
