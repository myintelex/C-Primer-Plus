#include <iostream>
#include <unistd.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Daphon_principal = 10;
    int Cleo_principal = 100;
    int i = 1;

    float Daphon_interest = Daphon_principal * 0.1;
    float Cleo_interest = Cleo_principal * 0.05;
    cout << Daphon_interest << " : " << Cleo_interest << endl;

    while((Daphon_principal - 10) <= (Cleo_principal -100))
    {
        i++;
        Daphon_principal *= 1.1;
        Cleo_principal *= 1.05;
        cout << Daphon_principal -10<< " : " << Cleo_principal -100<< endl;
        sleep(1);
    }

    cout <<  i << " years, the interest of Daphon is more than Cleo, the Cleo have ";
    cout << Cleo_interest <<", and the Daphon have " << Daphon_interest << endl;

    return 0;

}
