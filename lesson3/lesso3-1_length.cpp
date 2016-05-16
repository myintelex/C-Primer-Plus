#include <iostream>

const int TRANS = 12;
int main()
{
  int ft_input;
  std::cout<<"Please input your stature"<<std::endl;
  std::cout<<"_"
  std::cin>>ft_input;
  std::cout<<"Your stature is " << (ft_input / TRANS)<< " ft and " << (ft_input % TRANS)<< " in" << std::endl;
}
