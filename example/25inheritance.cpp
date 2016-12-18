#include <iostream>
using namespace std;

typedef unsigned char byte ;

class Punkt
{
public:
  Punkt(int i) : x(i){};
    int x;
    int y;
};


class KolorowyPunkt : public Punkt
{
  public: 
 KolorowyPunkt(): Punkt(2) {};   
    byte r;
    byte g;
    byte b;
};


int main()
{
  KolorowyPunkt kp;
  //kp.x=2;
  
  return 0;
}