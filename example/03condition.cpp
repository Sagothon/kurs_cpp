#include <iostream>
using namespace std;

int main()
{
  int dzielna, dzielnik;
//  float dzielna, dzielnik;

  cout << "Podaj wartosc dzielnej: ";
  cin >> dzielna;
  cout << "Podaj wartosc dzielnika: ";
  cin >> dzielnik;

  if(dzielnik == 0)
  {
    cout << "Nie dziel przez zero!" << endl;
  }
  else
  {
    int wynik = dzielna / dzielnik;
//    float wynik = dzielna / dzielnik;
    cout << "Wynik = " << wynik << endl;
  }
  /* Ponizsza linia spowoduje blad kompilacji,
     poniewaz zmienna "wynik" nie jest znana w tym obszarze
  */
  //cout << "Wynik = " << wynik << endl;
  
  return 0;
}