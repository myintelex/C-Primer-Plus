#include <iostream>

using namespace std;

long double sun_value()
{
    return 0;
}

template<typename T>
long double sun_value(T t)
{
    return t;
}

template<typename T, typename... Args>
long double sun_value(T t, Args... args)
{
    t = t + sun_value(args...);
    return t;
}

int main(int argc, char *argv[])
{
    cout << sun_value(1) << endl;
    cout << sun_value(1, 2) << endl;
    cout << sun_value(1, 3) << endl;
    cout << sun_value(1, 4, 5.4) << endl;
    cout << sun_value() << endl;
    return 0;
}
