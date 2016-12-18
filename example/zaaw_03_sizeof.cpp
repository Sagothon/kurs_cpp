#include <iostream>
using namespace std;

struct A
{
  bool a;
  bool b;
};

struct B
{
  bool a;
  int i;
};

struct C
{
  int i;
  bool a;
};

struct D
{
  short i;
  bool a;
};

struct E
{
  bool a;
  int i;
  bool b;
};

struct F
{
  int i;
  bool a;
  bool b;
};

//gcc - przy skladowych
//__attribute__((packed))

//MSVC przed struktura
//#pragma pack(1)
int main()
{
  cout<<"Sizeof A "<<sizeof(A)<<endl;
  cout<<"Sizeof B "<<sizeof(B)<<endl;
  cout<<"Sizeof C "<<sizeof(C)<<endl;
  cout<<"Sizeof D "<<sizeof(D)<<endl;
  cout<<"Sizeof E "<<sizeof(E)<<endl;
  cout<<"Sizeof F "<<sizeof(F)<<endl;

  return 0;
}