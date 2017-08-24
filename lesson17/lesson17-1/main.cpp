#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    char ch;
    int count = 0;
    while (cin.get(ch) && ch != '$')
        count++;
    if (ch == '$')
        cin.putback(ch);
    else
        cout << "End of input was reached\n";
    cout << count << " characters read\n";

    return 0;
}
