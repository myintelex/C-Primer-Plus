#include <iostream>
#include <initializer_list>
#include <algorithm>

using namespace std;

template<typename T>
T average_list(initializer_list<T> list)
{
    T sum;
    for_each(list.begin(), list.end(), [&sum](T x){sum += x;});
    return sum/list.size();
}

int main(int argc, char *argv[])
{
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    cout << average_list<double>({'A', 70, 65.33});
    return 0;
}
