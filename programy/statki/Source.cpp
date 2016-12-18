#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class point {

	int x;
	int y;
public:
	point (int x, int y) {

		this->x = x;
		this->y = y;
	}
	friend class statek;
	friend class gierka;
};

class statek {

	vector <point> pozycja;
	int hit;

public:
	statek () {
		hit = 0;
	}

	void build_ship(int x, int y) {
		pozycja.push_back(point(x,y));

	}
	bool check (point p) {

		for (int i=0; i<pozycja.size(); i++) {
			if (p.x == pozycja[i].x && p.y == pozycja[i].y) {
				hit+=1;
				cout<<"hity i wielkos s"<<hit<<" "<<pozycja.size()<<endl;
				return true;
				//break;
			}
		}
			return false;
	}

	bool hit_check() {
		if (pozycja.size() - 1 == hit)
			return true;
		else 
			return false;
	}

	friend class gierka;
};

class gierka {

	vector <statek> statki;
	int ilosc_strzalow;
	int tablica[10][10];

public:
	gierka() {

		for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {

			tablica[i][j] = 0;
		};
	};

		//rozmieszczanie statków
	for (int i=0; i<5; i++) {

		statek s = statek();

		int x = rand() % 10;
		int y = rand() % 10;

		int wielkosc_statku = rand() % 5;
		s.build_ship(x,y);
		
		for (int j = 0 ;j<wielkosc_statku;j++) {
			if (x>9) break;
			s.build_ship(x++,y);
		}
		statki.push_back(s);

	}
		for (int i=0; i<statki.size(); i++) {
			cout<<statki[i].pozycja[0].x<<" "<<statki[i].pozycja[0].y<<endl;;
		}
	};


	void wyswietl() {


	for (int i=0; i<10; i++) {
		cout<<i;
		for (int j=0; j<10; j++) {
			if (tablica[i][j] == 1)
				cout<<" T ";
			else if (tablica[i][j] == 2)
				cout<<" Z ";
			else if (tablica[i][j] == 3)
				cout<<" X ";
			else 
				cout<<"   ";

		}
		cout<<endl;
	}
		cout<<" ";
		for (int i =0; i<10; i++){
			cout<<" "<<i<<" ";
		}; cout<<endl;
	};

	void play() {

		while(true) {
			cout<<"podaj wspolrzedne"<<endl;
			wyswietl();
			int x;
			int y;
			cin>> x >> y;
			point p = point(x,y);
				tablica[p.x][p.y] = 3;
			for (int i=0; i<statki.size(); i++) {

				if (statki[i].check(p) == true) {
					tablica[p.x][p.y] = 1;
			} 
				if (statki[i].hit_check() == true){
					cout<<"size"<<statki[i].pozycja.size()<<endl;
					for (int j = 0; j<statki[i].pozycja.size(); j++) {
						tablica[statki[i].pozycja[j].x][statki[i].pozycja[j].y] = 2;
					}
				}

				
					 
					
			}

		}
	}

};


int main () {

	gierka *g = new gierka();
	g->play();

	
	delete g;

	

	system("pause");
	return 0;

}