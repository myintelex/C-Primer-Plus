#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

struct donate
{
    string name;
    double count;
};
int main()
{
    int num;
    cout << "Please input the number of donor: ";
    cin >> num;
    cin.get();

    vector<donate> donor(num);

    int i = 0;
    while(i < num)
    {
        cout << "Intput the name:";
        getline(cin, donor[i].name);
        cout << "Intput the amount:";
        cin >> donor[i].count;
        cin.get();
        i++;
    }

    cout << "the Grand Patrons: \n";
    i = 0;
    while(i < num)
    {
        if (donor[i].count > 10000 )
            cout << donor[i].name << endl;
        i++;
    }

    cout << "the Patrons: \n";
    i = 0;
    while(i < num)
    {
        if (donor[i].count < 10000 )
            cout << donor[i].name << endl;
        i++;
    }

    return 0;

}
