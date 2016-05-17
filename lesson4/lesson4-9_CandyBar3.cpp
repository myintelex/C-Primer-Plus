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
    CandyBar * snack= new CandyBar[3];
    snack[0].brand = "snack";
    snack[0].weight = 2.5;
    snack[0].calorie = 250;

    snack[1].brand = "mashmallow";
    snack[1].weight = 2.3;
    snack[1].calorie = 290;

    snack[2].brand = "chocolate";
    snack[2].weight = 1.5;
    snack[2].calorie = 650;

    cout << "Brand: " << snack[0].brand ;
    cout << "; Weight: " << snack[0].weight ;
    cout << "; calorie: " << snack[0].calorie << endl;

    cout << "Brand: " << snack[1].brand ;
    cout << "; Weight: " << snack[1].weight ;
    cout << "; calorie: " << snack[1].calorie << endl;

    cout << "Brand: " << snack[2].brand ;
    cout << "; Weight: " << snack[2].weight ;
    cout << "; calorie: " << snack[2].calorie << endl;
    delete [] snack;
    return 0;

}
