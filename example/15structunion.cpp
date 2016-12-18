#include <iostream>  
using namespace std;

struct Lodka
{
  int wezly;
  float wypornosc;
};

struct Samochod
{
  float km_h;
  char rejestracja[7];
};

union Amfibia
{
  Samochod ladowe;
  Lodka wodne;
};

int main()
{
  
  cout << "Rozmiar struktury lodka = " << sizeof(Lodka) << endl;
  cout << "Rozmiar struktury samochod = " << sizeof(Samochod) << endl;
  cout << "Rozmiar unii amfibia = " << sizeof(Amfibia) << endl << endl;
  
  Samochod bmw = {120.0,{'E','L','1','2','3','A','A'}};
 // Samochod bmw = {{'E','L','1','2','3','A','A'}};
 // Samochod bmw = {120.0};
  
  Lodka omega;
  
  omega.wypornosc = 245.3;
  omega.wezly = 3;
  
  Amfibia zabcia;
  
  zabcia.ladowe.km_h = 60.0;
  
  cout << "Amfibia zabcia ma predkosc na ladzie = " << zabcia.ladowe.km_h << endl;
  
  zabcia.wodne.wezly = 4;
  
  cout << "Amfibia zabcia ma predkosc na wodzie = " << zabcia.wodne.wezly << endl;
  cout << "Amfibia zabcia ma predkosc po zmianie = " << zabcia.ladowe.km_h << endl << endl;
  
  Samochod *bmw_ptr = &bmw;
  cout << "Predkosc samochodu ze wskaznika = " << bmw_ptr->km_h << endl;
  
  

  return 0;
}