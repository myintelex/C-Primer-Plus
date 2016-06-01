#include <iostream>

using namespace std;

double *   Fill_array(double * start, int end);
void Show_array(const double * start, const double * end);
void revalue(double r, double * start, const double * end);

int main(int argc, char const *argv[])
{
    int size = 5;
    double array[5];
    double * end = array + 5;
    end  = Fill_array(array, 5);
    Show_array(array, end);
    revalue(0.8, array, end);
    Show_array(array, end);
}

double *  Fill_array(double * start, int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << "Enter value #" << i + 1 << " : ";
        if((cin >> *start) && (*(start++) > 0))
            continue;
        else
        {
            start--;
            break;
        }
    }
    return start;
}

void Show_array(const double * start, const double * end)
{
    int i = 0;
    while(start < end)
    {
        cout <<  "Property #"<< i++ << " : " << *(start++) << "    ";
    }
    cout << endl;
}

void revalue(double r, double * start, const double * end)
{
    while(start < end)
    {
        (*(start++)) *= r;
    }
}