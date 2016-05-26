#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

    cout << "Please input one of the following choices:"<< endl;
    cout << "c) carnivore                    p) pianist"<< endl;
    cout << "t) tree                              g) game"<< endl;

    char ch = 'a';

    while(ch != 'c' && ch != 't' && ch != 'p' && ch != 'g')
    {
        cout << "Please input c t p g:";
        cin>>ch;
        cout << endl;
    }
    switch(ch)
    {
        case 'c':
            cout << "A maple is a carnivore"<<endl;
            break;
        case 'p':
            cout << "A maple is a pianist"<<endl;
            break;
        case 't':
            cout << "A maple is a tree"<<endl;
            break;
         case 'g':
            cout << "A maple is a game"<<endl;
            break;
        default:
            break;
    }

     return 0;
}
