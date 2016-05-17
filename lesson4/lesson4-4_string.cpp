#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string first_name;
    string last_nasme;

    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_nasme);


    cout << "Here is information in a single string : " ;
    cout <<  last_nasme + ", " + first_name << endl;
    return 0;
}
