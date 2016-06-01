#include <iostream>

void input(double array[]);
void display(double array[]);
void everage(double array[]);

int main(int argc, char const *argv[])
{
    double arr[10] = {0};
    input(arr);
    display(arr);
    everage(arr);
}

void input(double array[])
{
    int i;
    std:: cout << "Input your score (0 to quit): \n";
    for(i = 0; i < 10; i++)
    {
        std::cout << i+1 << ": ";
        std::cin >> array[i];
        if(array[i] == 0)
        {
            break;
        }
    }
    std::cout << "you have input " << i  << " score\n";
    while(i < 10)
    {
        array[i++] = 0;
    }
    return ;
}

void display(double array[])
{
    for(int i = 0; i < 10 && array[i] != 0; i++)
    {
        std::cout << i+1 << ": " << array[i]<< "    ";
    }
    std::cout<<std::endl;
}

void everage(double array[])
{
    double sum = 0;
    int  i;
    for(i = 0; i < 10 && array[i] != 0; i++)
    {
        sum += array[i];
    }

    std::cout << "The everage is " << 1.0 * sum / i << std::endl;

}
