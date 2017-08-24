#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void show(string str)
{
    cout << "  "  << str;
}

int main(int argc, char *argv[])
{
    cout << "Please Input the Mat`s friend`s Name(q for quit): " << endl;
    string names;
    getline(cin, names);
    set<string> Mat_friends;
    while(names != "q")
    {
        Mat_friends.insert(names);
        getline(cin, names);
    }

    cout << "Please Input the Pat`s friend`s Name(q for quit): " << endl;
    getline(cin, names);
    set<string> Pat_friends;
    while(names != "q")
    {
        Pat_friends.insert(names);
       getline(cin, names);
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
    return 0;
}
