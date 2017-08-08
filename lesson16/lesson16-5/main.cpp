#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

template <class T>
void show(T c)
{
    cout << c << " ";
}

template <class T>
int reduce(T ar[], int n)
{
    list<T>arr;
    arr.insert(arr.begin(), ar, ar + n);
    arr.sort();
    arr.unique();
    cout << "Affter The Data Total[" << arr.size() << "] Data is:\n ";
    for_each(arr.begin(), arr.end(), show<T>);
    cout << endl;
    return arr.size();
}

int main(int argc, char *argv[])
{
    long lData[20] = {112,123123,123,123,123,154,97,89,1361,5,79,7,91,6,1456,16,18,847,61,1};
    string lString[11] = {"sada", "asd", "fhj", "ashf", "jjla", "shdf9",
                      "uqwu", "eyuiyui", "grqhon", "ucvgabuwqy", "iouecnqiwdbcuywbv"};


    cout << "The Origin Data is: " << endl;
    for (int i = 0; i < 20; i++)
        cout << lData[i] << " ";
    cout << endl;

    reduce(lData, 20);

    cout << "The Origin Data is: " << endl;
    for (int i = 0; i < 11; i++)
        cout << lString[i] << " ";
    cout << endl;
    reduce(lString, 11);
    return 0;
}
