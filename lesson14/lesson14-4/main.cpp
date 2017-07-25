#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;

const int Size = 10;

int main(int argc, char *argv[])
{
    Person *per[Size];
    int ct;
    for (ct = 0; ct< Size; ct++)
    {
        char choice;
        cout<< "Enter the Person: \n"
            << "g: gunslinger   p: poker  "
            << "b: bad dude   q: quit\n";
        cin>> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout<< "Please enter a p,g,o,q: ";
            cin>> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case'g':
            per[ct] = new Gunslmger;
            break;
        case'p':
            per[ct] = new PorkPlayer;
            break;
        case'b':
            per[ct] = new BadDude;
            break;
        }
        cin.get();
        per[ct]->set();
    }
    cout<< "\nHere is your staff:\n";
    int i;
    for (i = 0; i<ct; i++)
    {
        cout<<endl;
        per[i]->show();
    }
    for (i = 0; i<ct; i++)
        delete per[i];
    cout<< "Bye\n";
    return 0;
}
