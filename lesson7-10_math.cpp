#include <iostream>

using namespace std;

double add(double a, double b){return a+b;}
double sub(double a, double b){return a-b;}
double mul(double a, double b){return a*b;}
const string opera[3] = {"Add ", "Sub ", "Mul"};

int main(int argc, char const *argv[])
{
    double (*pt[3])(double, double);
    pt[0] = add;
    pt[1] = sub;
    pt[2] = mul;


    while(1)
    {
        double a = 1, b = 1;
        cout << "Input two num: \n";
        if(cin>>a && a!= 0 && cin >>b && b != 0)
        {
            for(int i = 0; i< 3; i++)
            {
                cout << "the answer of " << opera[i] <<" is " << pt[i](a, b) << endl;
            }
        }
        else
        {
            break;
        }
    }

    cout << "Done. \n";
}
