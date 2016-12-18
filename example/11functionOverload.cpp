#include <iostream>

using namespace std;

void mnozenie(int& wynik, int a, int b)
{
  wynik = a*b;
}

void mnozenie(int* wynik, int a, int b)
{
  if(wynik != NULL)
  {
    *wynik = a*b;
  }
  else
  {
    cout << "a*b = " << a*b << endl;
  }
}

int mnozenie (int a, int b)
{
  return a*b;
}

int main()
{
  int liczba_a = 2;
  int liczba_b = 4;
  int wynik = 0;

  mnozenie(wynik, liczba_a, liczba_b);
  cout << "mnozenie - paramReferencja = " << wynik << endl;

  wynik = 0;
  mnozenie(&wynik, liczba_a, liczba_b);
  cout << "mnozenie - paramWskaznik = " << wynik << endl;

  cout << "mnozenie - dwa parametry = " << mnozenie(liczba_a, liczba_b) << endl;
  
  return 0;
}