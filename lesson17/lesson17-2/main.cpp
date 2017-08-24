#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Please input the filename\n";
        return -1;
    }

    ofstream fout(argv[1], ios::out|ios::app);
    if (!fout.is_open())
    {
        cout << "File open failed\n";
        return -2;
    }
    cout << "Input the string: ";
    char ch;
    while (cin.get(ch))
    {
        if (ch != '\n')
            fout << ch;
        else
            break;
    }
    fout.close();
    return 0;
}
