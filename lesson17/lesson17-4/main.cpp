#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Please input the filename\n";
        return -1;
    }

    ifstream fin1(argv[1], ios::in|ios::app);
    if (!fin1.is_open())
    {
        cout << "File in open failed\n";
        return -2;
    }


    ifstream fin2(argv[2], ios::in|ios::app);
    if (!fin2.is_open())
    {
        cout << "File in open failed\n";
        return -2;
    }

    ofstream fout(argv[3], ios::out|ios::app);
    if (!fout.is_open())
    {
        cout << "File out open failed\n";
        return -2;
    }

    while (!fin1.eof() && !fin2.eof())
    {
        string str;
        getline(fin1, str);
        fout << str << " ";
        getline(fin2, str);
        fout << str << endl;
    }

    while (!fin1.eof())
    {
        string str;
        getline(fin1, str);
        fout << str << endl;
    }
    while (!fin2.eof())
    {
        string str;
        getline(fin2, str);
        fout << str << endl;
    }
    cout << "Copy End!\n";
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}
