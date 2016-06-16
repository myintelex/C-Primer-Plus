#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

struct donate
{
    string name;
    double count;
};
int main()
{
    int num = 1024;

    ifstream infile;
    infile.open("donate.txt");

    vector<donate> donor(num);

    int i = 0;
    while(infile.good())
    {
       	infile >> donor[i].name;
        infile >>  donor[i].count;
       	i++;
    }
	num = i;
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
