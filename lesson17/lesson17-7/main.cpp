#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;
void ShowStr(string & str)
{
    cout << str << endl;
}

void GetStr(ifstream & fin, vector<string> & vistr)
{
    size_t len;
    string str;
    char ch;
    while (fin.peek() && !fin.eof())
    {
        fin.read((char *) &len, sizeof(size_t));
        for (size_t i = 0; i < len; i++)
        {
            fin.read(&ch, sizeof(char));
            str.push_back(ch);
        }
        str.push_back('\0');
        vistr.push_back(str);
        str.clear();
    }
}

class Store
{
private:
    ofstream *os;
public:
    Store(ofstream * fout):os(fout){}
    ~Store(){}
    Store & operator ()(const string & str)
    {
        size_t len = str.length();
        os->write((char *) &len, sizeof (size_t));
        os->write(str.data(), len);
    }

};

int main(int argc, char *argv[])
{
    vector<string> vostr;
    string temp;
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);

    cout << "Here is your input:\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out|ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(&fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in|ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }

    GetStr(fin, vistr);
    cout << "\nHere are the strings read from the file\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}


