#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Please input the filename\n";
        return -1;
    }

    ifstream fin(argv[1], ios::in|ios::app);
    if (!fin.is_open())
    {
        cout << "File in open failed\n";
        return -2;
    }

    ofstream fout(argv[2], ios::out|ios::app);
    if (!fout.is_open())
    {
        cout << "File out open failed\n";
        return -2;
    }

    char ch;
    while(fin.get(ch))
        fout << ch;
    cout << "Copy End!\n";
    fin.close();
    fout.close();
    return 0;
}
