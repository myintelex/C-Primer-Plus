#include <iostream>

using namespace std;

int Fill_array(double array[], int num);
void Show_array(double array[], int num);
void Reverse_array(double array[], int num);

int main(int argc, char const *argv[])
{
    int size = 10;
    double array[size];
    size = Fill_array(array, 10);
    Show_array(array, size);
    Reverse_array(array, size);
    Show_array(array, size);
    Reverse_array(array + 1, size - 2);
    Show_array(array, size);
}

int Fill_array(double array[], int num)
{
    int i = 0;
    while((i < num) && (cin >> array[i++]));
    return i;
}

void Show_array(double array[], int num)
{
    int i = 0;
    while(i < num)
    {
        cout << i << " : " << array[i++] << "    ";
    }
    cout << endl;
}

void Reverse_array(double array[], int num)
{
    int i  = 0 ;
    int j = num -1;
    double temp;
    while( i <= j)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
}