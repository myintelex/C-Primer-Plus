#include <iostream>

void show(double da[]);
void fill(double pa[]);

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

int main(int argc, char const *argv[])
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(double pa[])
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Sname[i] << "expenses: ";
        cin >> pa[i];
    }
}

void show(double da[])
{
    using namespace std;
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << ": $ " << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}
