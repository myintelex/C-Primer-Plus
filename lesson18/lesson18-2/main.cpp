#include <iostream>
#include "cpmv.h"
using namespace std;

int main(int argc, char *argv[])
{
    Cpmv cpmv1;
    Cpmv cpmv2("11111", "22222");
    Cpmv cpmv3(cpmv2);
    Cpmv cpmv4(cpmv1 + cpmv2);
    Cpmv cpmv5;
    cpmv5 = cpmv2 + cpmv3;
    Cpmv cpmv6;
    cpmv6 = cpmv5;
    cpmv1.Display();
    cpmv2.Display();
    cpmv3.Display();
    cpmv4.Display();
    cpmv5.Display();
    cpmv6.Display();
}
