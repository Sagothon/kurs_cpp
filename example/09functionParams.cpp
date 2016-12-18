#include <iostream>

using namespace std;

void mnozenie_paramWartosc(int wynik, int a, int b)
{
  wynik = a*b;
}

void mnozenie_paramReferencja(int& wynik, int a, int b)
{
  wynik = a*b;
}

void mnozenie_paramWskaznik(int a, int b, int* wynik = NULL)
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

int main()
{
  int liczba_a = 2;
  int liczba_b = 4;
  int wynik = 0;
  
  mnozenie_paramWartosc(wynik, liczba_a, liczba_b);
  cout << "mnozenie_paramWartosc = " << wynik << endl;

  wynik = 0;
  mnozenie_paramReferencja(wynik, liczba_a, liczba_b);
  cout << "mnozenie_paramReferencja = " << wynik << endl;
  
  wynik = 0;
  mnozenie_paramWskaznik(liczba_a, liczba_b, &wynik);
  cout << "mnozenie_paramWskaznik = " << wynik << endl << endl;

  wynik = 0;
  mnozenie_paramWskaznik(liczba_a, liczba_b);
  cout << "mnozenie_paramWskaznik wartosc domyslna= " << wynik << endl;
  
  return 0;
}