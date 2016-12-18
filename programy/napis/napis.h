#include <iostream>
using namespace std;

class napis {
	char *nap;

public:
	napis();
	napis(const char *p);
	napis(const napis &n);
	~napis();
	void operator +(napis &n);
	void operator =(const napis&a);
	void wypisz();
	int licz_dlugosc(const char *p);
	int licz_dlugosc();

	void koment();
};
