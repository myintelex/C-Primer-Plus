#include <iostream>
using namespace std;

const int HourOfDay = 24;
const int MinOfHour = 60;
const int SecOfMin = 60;

int main()
{

  long long  seconds;
  
  cout<<"Enter the number of seconds: ";
  cin>>seconds;
  
  cout<<seconds<<" seconds = "
	<<(seconds/(HourOfDay*MinOfHour*SecOfMin))<<" days, "
	<<(seconds/(MinOfHour*SecOfMin)%HourOfDay)<<" hours, "
	<<(seconds/SecOfMin%SecOfMin)<<" mintues, "
	<<(seconds%SecOfMin)<<" seconds, "<< endl;
}
