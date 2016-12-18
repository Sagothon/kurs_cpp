#include <iostream>

class A
{
  public:
  bool i;
  int a ;//__attribute__((packed));
  short b ;//__attribute__((packed));
//   ~A(){std::cout<<"Dest"<<std::endl;}
};

int main()
{
  A* a = new A [3];
  std::cout<<sizeof(A)<<std::endl;
  std::cout<< ((int*)a)[-1] <<std::endl;
  return 0;
}