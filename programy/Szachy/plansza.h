#pragma once
class figura;

class plansza {
public:
	class figura* plan[8][8];

	plansza();
	void wyswietl();

	//friend class figura;
	//friend class pionek;
	//friend class wieza;
	//friend class skoczek;
	//friend class goniec;
};

