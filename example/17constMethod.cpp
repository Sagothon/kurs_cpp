#include <iostream>
using namespace std;

class C{
  public:
    void fun()      {cout<<"function without const"<<endl;}
    void fun()const {cout<<"Const function"<<endl;}
};

void function(const C& c)
{
  c.fun();
}

int main() {
  C c;
  
  function(c);
  c.fun();
  return 0;
}


