#include "plansza.h"
#include "figura.h"
#include <iostream>
plansza::plansza() {
	for (int i = 0; i<8; i++){
	for (int j = 0; j<8; j++) {

		plan[i][j] = nullptr;

		if (i==1){
			plan [i][j] = new pionek(i,j,1);
		}
		if (i==6) {
			plan [i][j] = new pionek(i,j,2);
		}
		if (i == 0) {
			if (j == 0 || j == 7) plan[i][j] = new wieza(i,j, 1);
			if (j == 1 || j == 6) plan[i][j] = new skoczek(i,j, 1);
			if (j == 2 || j == 5) plan[i][j] = new goniec(i,j, 1);
			if (j == 3) plan[i][j] = new hetman(i,j, 1);
			if (j == 4) plan[i][j] = new krol(i,j, 1);
		}
		if (i == 7) {
			if (j == 0 || j == 7) plan[i][j] = new wieza(i,j, 2);
			if (j == 1 || j == 6) plan[i][j] = new skoczek(i,j, 2);
			if (j == 2 || j == 5) plan[i][j] = new goniec(i,j, 2);
			if (j == 3) plan[i][j] = new hetman(i,j, 2);
			if (j == 4) plan[i][j] = new krol(i,j, 2);
		}
	}
}
}

void plansza::wyswietl() {
	for (int i = 0; i<8; i++){
	cout<<i;
	for (int j = 0; j<8; j++) {
		if (plan[i][j] == nullptr) {
			cout<<"  ";
		} else if( plan[i][j]->kto_ja() == 1)
			cout<<" P ";
		else if( plan[i][j]->kto_ja() == 2)
			cout<<" W ";
		else if( plan[i][j]->kto_ja() == 3)
			cout<<" S ";
		else if( plan[i][j]->kto_ja() == 4)
			cout<<" G ";
		else if( plan[i][j]->kto_ja() == 5)
			cout<<" H ";
		else if( plan[i][j]->kto_ja() == 6)
			cout<<" K ";

		/*

		switch (plan[i][j]->kto_ja()) {
		case 1:
			cout<<" P ";
			break;
		case 2:
			cout<<" W ";
			break;
		case 3:
			cout<<" S ";
			break;
		case 4:
			cout<<" G ";
			break;
		case 5:
			cout<<" H ";
			break;
		case 6:
			cout<<" K ";
			break;
		}
		*/
	}
	cout<<endl;
}
cout<<" ";
for (int i = 0; i<8; i++){
			cout<<" "<<i<<" ";
		}; cout<<endl;

}
