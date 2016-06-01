#include <iostream>

void show(EXPEN da);
void fill(EXPEN *pa);

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct EXPEN
{
    double expenses[Seasons];
};

int main(int argc, char const *argv[])
{
    EXPEN expen;
    fill(&expenses);
    show(expenses);
    return 0;
}
void fill(EXPEN * pa)
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Sname[i] << "expenses: ";
        cin >> pa->expenses[i];
    }
}

void show(EXPEN da)
{
    using namespace std;
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << ": $ " << da.expenses[i] << endl;
        total += da.expenses[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}