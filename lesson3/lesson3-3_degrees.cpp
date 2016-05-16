#include <iostream>
using namespace std;

const int TRANS = 60;

int main()
{

  float degrees;
  float minutes;
  float seconds;
  
  cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
  cout<<"First, enter the degree: ";
  cin>>degrees;
  cout<<"Next, enter the minutes of arc: ";
  cin>>minutes;
  cout<<"Finally, enter the seconds of arc: ";
  cin>>seconds;

  
  cout<<degrees<<" degrees, "
	<<minutes<<" minutes, "
	<<seconds<<" seconds = "
	<<(degrees + (minutes / TRANS) + (seconds / TRANS / TRANS))
	<<" degrees "<< endl;
}
