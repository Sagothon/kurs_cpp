#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  int* w = &a;

  cout << "a = " << a << "\tw = " <<  w << "\t*w = " <<  *w << endl;

  cout << "zmieniamy wartosc *w" << endl;
  *w = 30;
  cout << "a = " << a << "\tw = " <<  w << "\t*w = " <<  *w << endl;

  cout << "zmieniamy wartosc a" << endl;
  a = 100;
  cout << "a = " << a << "\tw = " <<  w << "\t*w = " <<  *w << endl;
  
  return 0;
}