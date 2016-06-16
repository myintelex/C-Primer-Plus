#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char first_name[20] = {};
    char last_nasme[20] = {};
    char name[40] = {};

    cout << "Enter your first name: ";
    cin.get(first_name, 20).get();
    cout << "Enter your last name: ";
    cin.get(last_nasme, 20).get();
    strcpy(name, last_nasme);
    strcat(name,  ", ");
    strcat(name, first_name);

    cout << "Here is information in a single string : " <<  name << endl;
    return 0;
}
