#include <iostream>

using namespace std;

int mnozenie(int a, int b)
{
  return a*b;
}



int main()
{
  int liczba_a, liczba_b, wynik;

  cout << "Podaj pierwsza liczbe: ";
  cin >> liczba_a;
  cout << "Podaj druga liczbe: ";
  cin >> liczba_b;

  wynik = mnozenie(liczba_a,liczba_b);
  cout << "Wynik mnozenia: " << wynik << endl;

  return 0;
}