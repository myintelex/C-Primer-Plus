#include <iostream>
#include <unistd.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct car
{
    string productor;
    int year;   
};

int main()
{
    int num;
    cout << "How many car do you wish to catalog?";
    cin >> num;

    car * m_car = new car[num];

    for(int i = 0; i < num; i++)
    {
        cout << "Car #" << i  + 1<< " : "<< endl;
        cin.get();

        cout << "Please input the make : ";
        getline(cin, m_car[i].productor);

        cout << "Please input the year : ";
        cin >> m_car[i].year;
    }

    cout << "Here is your collection: " << endl;
    for(int i = 0; i < num; i++)
    {
        cout << m_car[i].year << "    " << m_car[i].productor << endl;
    }

    delete [] m_car;



     return 0;
}
