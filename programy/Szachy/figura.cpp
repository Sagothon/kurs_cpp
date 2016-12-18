#include <iostream>
#include "figura.h"
using namespace std;

point::point (int x, int y) {

		this->x = x;
		this->y = y;
	}

figura::figura (int x, int y, int g): pozycja(x, y) {}
bool figura::ruch (int x, int y, plansza *p) { return 0;};
int figura::kto_ja() {return 0;}


pionek::pionek (int x, int y, int g): figura(x, y, gracz = g) {}
bool pionek::ruch(int x, int y, plansza *p) {
	if (this->gracz == 1 && (pozycja.y-y) == 0){
		if( (pozycja.x+1) == x || (pozycja.x+2) == x  ) {
			if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
	}

	if (this->gracz == 2 && (pozycja.y-y) == 0){
		if((pozycja.x-1) == x || (pozycja.x-2) == x ) {
			if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
	}
};
int pionek::kto_ja() {return 1;}


krol::krol (int x, int y, int g): figura(x, y, gracz = g) {}
bool krol::ruch (int x, int y, plansza *p) {
			if (  ((pozycja.x+1) == x && (pozycja.y+1) == y ) ||  ((pozycja.x+1) == x && (pozycja.y) == y )  ||  ((pozycja.x+1) == x && (pozycja.y-1) == y )  ||  ((pozycja.x) == x && (pozycja.y+1) == y ) ||  ((pozycja.x) == x && (pozycja.y-1) == y ) ||  ((pozycja.x-1) == x && (pozycja.y-1) == y ) ||  ((pozycja.x-1) == x && (pozycja.y) == y ) ||  ((pozycja.x-1) == x && (pozycja.y+1) == y )  ) {
				if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
			
		
};
int krol::kto_ja() {return 6;}


goniec::goniec (int x, int y, int g): figura(x, y, gracz = g) {}
bool goniec::ruch (int x, int y, plansza *p) {
	if (  (x - pozycja.x) == (y - pozycja.y) ) {
				if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
};
int goniec::kto_ja() {return 4;}


wieza::wieza (int x, int y, int g): figura(x, y, gracz = g) {}
bool wieza::ruch(int x, int y, plansza *p) {
	if (  ((pozycja.x) == x  ||  (pozycja.y) == y )   ) {
				if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
};
int wieza::kto_ja() {return 2;}


hetman::hetman (int x, int y, int g): figura(x, y, gracz = g) {}
bool hetman::ruch(int x, int y, plansza *p) {
	if (  ((x - pozycja.x) == (y - pozycja.y)) || ((pozycja.x) == x  ||  (pozycja.y) == y )  ) {
				if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
}
int hetman::kto_ja() {return 5;}


skoczek::skoczek (int x, int y, int g): figura(x, y, gracz = g) {}
bool skoczek::ruch(int x, int y, plansza *p) {
	if (  ((x - pozycja.x) == 2 &&  (y - pozycja.y) == 1) || ((x - pozycja.x) == -2 &&  (y - pozycja.y) == 1) || ((x - pozycja.x) == 2 &&  (y - pozycja.y) == -1) || ((x - pozycja.x) == 1 &&  (y - pozycja.y) == 2) || ((x - pozycja.x) == 1 &&  (y - pozycja.y) == -2) || ((x - pozycja.x) == -1 &&  (y - pozycja.y) == 2) || ((x - pozycja.x) == -1 &&  (y - pozycja.y) == -2)  ) {
				if(p->plan[x][y] == nullptr) {
				
				figura *tmp = p->plan[x][y];
				p->plan[x][y] = p->plan[pozycja.x][pozycja.y];
				p->plan[pozycja.x][pozycja.y] = tmp;
				pozycja.x = x;
				return true;
			}
			else{
                cout<<"Pole zajete."<<endl;
				return false;
			}
		}
		else{
            cout<<"Niedozwolony ruch."<<endl;
			return false;
        }
};
int skoczek::kto_ja() {return 3;}