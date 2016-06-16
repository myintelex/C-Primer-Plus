#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    CandyBar snack[3] = {
        {"snack", 2.5, 250},
        {"mashmallow", 1.2, 100},
        {"chocolate", 5.6, 400}
    };

    cout << "Brand: " << snack[0].brand ;
    cout << "; Weight: " << snack[0].weight ;
    cout << "; calorie: " << snack[0].calorie << endl;

    cout << "Brand: " << snack[1].brand ;
    cout << "; Weight: " << snack[1].weight ;
    cout << "; calorie: " << snack[1].calorie << endl;

    cout << "Brand: " << snack[2].brand ;
    cout << "; Weight: " << snack[2].weight ;
    cout << "; calorie: " << snack[2].calorie << endl;
    return 0;
}
