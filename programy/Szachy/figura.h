#pragma once
#include "plansza.h"
using namespace std;

class point {
public:
	int x;
	int y;

	point (int x, int y);


};

class figura {
public:
	point pozycja;
	int gracz;

	figura (int x, int y, int g);
	virtual int kto_ja();
	virtual bool ruch (int x, int y, plansza *p);

};

class pionek: public figura {

public:
	pionek (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};

class krol: public figura {

public:
	krol (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};

class goniec: public figura {

public:
	goniec (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};

class wieza: public figura {

public:
	wieza (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};

class hetman: public figura {

public:
	hetman (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};

class skoczek: public figura {

public:
	skoczek (int x, int y, int g);

	bool ruch(int x, int y, plansza *p);
	int kto_ja();
};