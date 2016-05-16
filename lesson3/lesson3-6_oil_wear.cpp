#include <iostream>
using namespace std;

int main()
{

  float  mileage;
  float  fule;
  cout<<"Enter the mileage of you car: ";
  cin>>mileage;

  cout<<"Enter the fule of you tast: ";
  cin>>fule;
  
  cout<<"The oil ware is " << (fule / mileage) <<" of your car"<< endl;
}
