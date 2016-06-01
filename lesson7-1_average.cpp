#include <iostream>

double average(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;
    
    while(1)
    {
        std::cout << "INPUT  the first('0' to quit): ";
        std::cin >> a;
        if(a == 0)
            return 0;
        std::cout << "INPUT the second('0' to quit): ";
        std::cin >> b;
        if(b == 0)
            return 0;
        std::cout << "the average is: " << average(a, b) << std::endl;
    } 
    return 0;
}

double average(int a, int b)
{
    return  2.0*a*b/(a + b);
}