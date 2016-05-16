#include <iostream>
using namespace std;

int main()
{

  long long  pop_of_USA;
  long long  pop_of_world;
  cout<<"Enter the world`s population: ";
  cin>>pop_of_world;

  cout<<"Enter the population of USA: ";
  cin>>pop_of_USA;
  
  cout<<"The population of USA is " << (((double)pop_of_USA /(double) pop_of_world) * 100)
	<<"% of the world`s population "<< endl;
}
