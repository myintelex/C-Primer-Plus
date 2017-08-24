#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <iterator>
#include <algorithm>

using namespace std;
const int Size = 1000000;

int main(int argc, char *argv[])
{
    clock_t start, end;
    vector<int> vi0(Size);
    list<int> li(Size);
    srand(time(0));

    for (int i = 0 ; i < Size; i++)
    {
        vi0[i] = rand()%Size;
    }
    copy(vi0.begin(), vi0.end(), back_inserter(li));
    vector<int> vi(vi0);

    start = clock();\
    std::sort(vi.begin(), vi.end());
    end = clock();
    cout << "The vector sort time is " << (end - start) << endl;

    start = clock();\
    li.sort();
    end = clock();
    cout << "The vector sort time is " << (end - start) << endl;


    copy(vi0.begin(), vi0.end(), back_inserter(li));
    start = clock();\
    copy(li.begin(), li.end(), back_inserter(vi));
    std::sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), back_inserter(li));
    end = clock();
    cout << "The List copy sort time is " << (end - start) << endl;

    return 0;
}
