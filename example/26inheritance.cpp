#include <iostream>
using namespace std;

typedef unsigned char byte ;

class Punkt
{
  public:
    Punkt()  {cout<<"Default c-tor for Punkt"<<endl;}
    Punkt(int x, int y)
      :x(x), y(y)
      {cout<<"c-tor with params for Punkt"<<endl;}
    Punkt(const Punkt& p)
    {
      x=p.x;
      y=p.y;
      cout<<"Copy c-tor for Punkt"<<endl;
    }
    ~Punkt() {cout<<"d-tor Punkt"<<endl;}
    int x;
    int y;
};


class KolorowyPunkt : public Punkt
{
  public:
      KolorowyPunkt() {cout<<"default c-tor for KolorowyPunkt"<<endl;} //1

    ~KolorowyPunkt(){cout<<"d-tor KolorowyPunkt"<<endl;} //2

//     KolorowyPunkt(int x, int y)	//3
//       : r(0), g(0), b(0)	
// //       : Punkt(x,y), r(0), g(0), b(0)	//3.5 add constructor with param 
//       {cout<<"c-tor with params for KolorowyPunkt"<<endl;}
//       
//     KolorowyPunkt(const KolorowyPunkt& p) //4
// //     : Punkt(p)			//5
//     {
//       r=p.r;
//       g=p.g;
//       b=p.b;
//       cout<<"Copy c-tor for KolorowyPunkt"<<endl;
//     }
    
    byte r;
    byte g;
    byte b;
};


int main()
{
//   Punkt p;
  KolorowyPunkt kp;
//   KolorowyPunkt kp(1,2); //3
//   KolorowyPunkt kp2 = kp; //4
  
  
  //5
  /*kp.x = 9;
  cout<<kp.x<<endl;
  KolorowyPunkt kp3 = kp; 
  cout<<kp3.x<<endl;
  */
  
  return 0;
}