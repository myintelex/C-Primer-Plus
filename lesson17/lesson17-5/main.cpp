#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <fstream>

using namespace std;
void show(string str)
{
    cout << "  "  << str;
}
int main(int argc, char *argv[])
{
    ifstream fin1("mat.dat", ios::in|ios::app);
    if (!fin1.is_open())
    {
        cout << "File in open failed\n";
        return -2;
    }
    string names;
    getline(fin1, names);
    set<string> Mat_friends;
    while(!fin1.eof())
    {
        Mat_friends.insert(names);
        getline(fin1, names);z
    }

    ifstream fin2("pat.dat", ios::in|ios::app);
    if (!fin2.is_open())
    {
        cout << "File in open failed\n";
        return -2;
    }
    getline(fin2, names);
    set<string> Pat_friends;
    while(!fin2.eof())
    {
        Pat_friends.insert(names);
        getline(fin2, names);
    }

    cout << "Mat`s friends: ";
    for_each(Mat_friends.begin(), Mat_friends.end(), show);
    cout << endl;

    cout << "Pat`s friends: ";
    for_each(Pat_friends.begin(), Pat_friends.end(), show);
    cout << endl;

    set<string> PM_friends;
    set_union(Mat_friends.begin(), Mat_friends.end(),
           Pat_friends.begin(), Pat_friends.end(),
              insert_iterator<set<string>>(PM_friends, PM_friends.begin()));

    cout << "Total friend: ";
    for_each(PM_friends.begin(), PM_friends.end(), show);

    ofstream fout("matnpat.dat", ios::out|ios::app);
    if (!fout.is_open())
    {
        cout << "File out open failed\n";
        return -2;
    }

    for (set<string>::iterator it = PM_friends.begin(); it != PM_friends.end(); it++)
    {
        fout << (*it) << endl;
    }

    cout << "Bye\n";
    return 0;
}
