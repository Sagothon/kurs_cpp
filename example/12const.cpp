#include <iostream>
using namespace std;

void function ( const int &a ) 
{
 //  a = 1; // <-- blad kompilacji
}

void function_paramPointer( const int *ca )
{
 //  *ca = 1; // <-- blad kompilacji
}

int main()
{
  /******************/
  /* stala liczbowa */
  /******************/
  
  const float pi = 3.1415;
  // pi = 4; // <-- blad kompilacji


  /*****************************/
  /* wskazniki - przypomnienie */
  /*****************************/

  int x = 5, z = 3;
  int *p = &x;

  *p = x; // zmiana wartosci obiektu wskazywanego
  p = &z; // zmiana obiektu wskazywanego

  /************************/
  /* wskazniki "na stala" */
  /************************/

  const int *cp = &x; // wskaznik "na stala"
//  int const *pc = &x; // <-- alternatywny zapis

  // gdy uzywamy tego typu wskaznika, kompilator traktuje obiekt
  // wskazywany jako stala (mimo ze tak na prawde to zmienna)
  
  // *cp = 10; // <-- blad kompilacji, wskaznik "na stala"

  x = 10;     // nie uzywajac wskaznika nadal mozna zmienic x
  cp = &z;    // sam wskaznik nie jest staly, mozna go zmienic

  /*******************/
  /* stale wskazniki */
  /*******************/
  
  int * const pc = &x; // staly wskaznik

  *pc = 11;
//  pc = &z; // <-- blad kompilacji. Staly wskaznik zawsze wskazuje na ten sam obiekt

  /*****************************/
  /* staly wskaznik "na stala" */
  /*****************************/

  const int *const cc = &x; // staly wskaznik "na stala"

  // tylko do odczytu
  
  return 0;
}