#include <iostream>
#include "figura.h"
#include "plansza.h"
using namespace std;

//
int main() {

plansza *p = new plansza();
int gracz = 1;
bool turn = true;

while(true) {
	p->wyswietl();
	int x,y; //miejsce figury
	int a,b; //pole na które leci figura


	if (gracz == 1) {
		cout<<"gracz gora, wybierz figure"<<endl;
		cin>>x;
		cin>>y;
		cout<<"gracz gora, wybierz pole na ktore chcesz isc"<<endl;
		cin>>a;
		cin>>b;
		p->plan[x][y]->ruch(a, b, p);
	
		gracz = 2;
		p->wyswietl();
		} 
	  if (gracz == 2) {
		cout<<"gracz dol, wybierz figure"<<endl;
		cin>>x;
		cin>>y;
		cout<<"gracz dol, wybierz pole na ktore chcesz isc"<<endl;
		cin>>a;
		cin>>b;
		p->plan[x][y]->ruch(a, b, p);
		gracz = 1;
	}

}
	system("pause");
	return 0;
};