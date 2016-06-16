#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    int diameter;
    float weight;
};

int main()
{
    Pizza buffer;

    cout << "Please input the company: ";
    getline(cin, buffer.company);

    cout << "Please input the diameter: ";
    cin >> buffer.diameter;

    cout << "Please input the weight";
    cin >> buffer.weight;

    cout << "Company: " << buffer.company ;
    cout << "; Diameter: " << buffer.diameter ;
    cout << "; Weight: " << buffer.weight << endl;


    return 0;
}
