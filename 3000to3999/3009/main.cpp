#include <iostream>

int main(){
  int x1=0, x2=0, x3=0, y1=0, y2=0, y3=0;
  std::cin>>x1>>y1>>x2>>y2>>x3>>y3;

  if(x1 == x2)
    std::cout<<x3<<" ";
  else if(x1 == x3)
    std::cout<<x2<<" ";
  else 
    std::cout<<x1<<" ";

  if(y1 == y2)
    std::cout<<y3;
  else if(y1 == y3)
    std::cout<<y2;
  else 
    std::cout<<y1;
}