#include <iostream>
using namespace std;

const float KIlO2BANG = 2.2;
const int FT2In = 12;
const float INtoMeter = 0.0254;


int main()
{

  int ft;
  int in;
  int bang;
  
  cout<<"Please input your stature"<<endl<<"ft:";
  cin>>ft;
  cout<<"in:";
  cin>>in;
  cout<<"bang";
  cin>>bang;
  
  cout<<"Your BMI is"<<((bang/KIlO2BANG) / (((ft*FT2In) + in) * INtoMeter) ) << endl;
}
