#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_NUM = 10;

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    long * end;
    end = std::unique(ar, ar + n);
    return end - ar;
}

int main(int argc, char *argv[])
{
    long buff[MAX_NUM];
    cout << "Please Input the Num: " << endl;
    for (int i = 0; i < MAX_NUM; i++)
    {
        cin >> buff[i];
    }

    int left = reduce(buff, MAX_NUM);

    cout << "The num reduce is : ";

    for (int i = 0; i < left; i++)
    {
        cout << buff[i] << " ";
    }
    return 0;
}
