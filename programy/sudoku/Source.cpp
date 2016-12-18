#include <iostream>
using namespace std;

void printy(int (&tab)[9][9]){

for (int i = 0; i<9; i++){
	for (int j = 0; j<9; j++){
		cout<<tab[i][j]<<" ";
	}
	cout<<endl;
}
}

bool check(int (&tab)[9][9], int rzedna, int odcieta, int wartosc) {
	for (int i = 0; i<9; i++) {
		if (wartosc == tab[odcieta][i])
			return false;
	}
	for (int i = 0; i<9; i++) {
		if (wartosc == tab[i][rzedna])
			return false;
	}
	
	if ((rzedna < 3 && odcieta < 3) && (rzedna >= 0 && odcieta >= 0)) {
		for (int i = 0; i<3; i++){
			for( int j = 0; j<3; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 3 && odcieta < 6) && (rzedna >= 0 && odcieta >= 3)) {
		for (int i = 0; i<3; i++){
			for( int j = 3; j<6; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 3 && odcieta < 9) && (rzedna >= 0 && odcieta >= 6)) {
		for (int i = 0; i<3; i++){
			for( int j = 6; j<9; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 6 && odcieta < 3) && (rzedna >= 3 && odcieta >= 0)) {
		for (int i = 3; i<6; i++){
			for( int j = 0; j<3; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 6 && odcieta < 6) && (rzedna >= 3 && odcieta >= 3)) {
		for (int i = 3; i<6; i++){
			for( int j = 3; j<6; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 6 && odcieta < 9) && (rzedna >= 3 && odcieta >= 6)) {
		for (int i = 3; i<6; i++){
			for( int j = 6; j<9; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 9 && odcieta < 3) && (rzedna >= 6 && odcieta >= 0)) {
		for (int i = 6; i<9; i++){
			for( int j = 0; j<3; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 9 && odcieta < 6) && (rzedna >= 6 && odcieta >= 3)) {
		for (int i = 6; i<9; i++){
			for( int j = 3; j<6; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	}

	else if ((rzedna < 9 && odcieta < 9) && (rzedna >= 6 && odcieta >= 6)) {
		for (int i = 0; i<3; i++){
			for( int j = 0; j<3; j++) {
				if (tab[i][j] == wartosc)
					return false;
				else
					return true;
			}
		}
	} 
}


bool solved(int tab[9][9]){

	for (int i = 0; i<9; i++){
	for (int j = 0; j<9; j++){
		if (tab[9][9] == 0)
			return false;
		else
			return true;
	}
}
}

int main() {
int tab [9][9]={{8,4,0,0,1,0,7,0,0},{0,3,0,0,0,5,1,0,0},{1,0,0,8,0,0,0,0,0},{0,1,0,3,8,0,9,0,2},{0,0,0,0,0,0,0,0,0},{9,0,8,0,7,2,0,4,0},{0,0,0,0,0,8,0,0,4},{0,0,2,5,0,0,0,3,0},{0,0,6,0,2,0,0,8,9}};
bool tab2[9][9];

for (int i = 0; i<9; i++){
	for (int j = 0; j<9; j++){
		if(tab[i][j] == 0)
			tab2[i][j] = true;
		else
			tab2[i][j] = false;
	} }


int koniec = 1;
while (koniec == 1) {
	printy(tab);
	int rzedna;
	int odcieta;
	int wartosc;
	
	int k = 1;
	do
	 {
	
	cout<<"podaj rzedna";
	cin>> rzedna;
	cout<<"podaj odcieta";
	cin>>odcieta;
	cout<<"poodaj wartosc";
	cin>>wartosc;

	if (tab2[rzedna][odcieta] == true) {
		k = 0;
	} else
		cout<<"can't touch this"<<endl;

	} while(k == 1);

	if (check(tab,rzedna,odcieta,wartosc))
		tab[rzedna][odcieta] = wartosc;
	else
		cout<<"zla wartosc"<<endl;

	if (solved(tab))
		koniec = 0;
}


system("pause");
return 0;

}