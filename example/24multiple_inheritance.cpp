#include <iostream>
using namespace std;

class Auto
{
	public:
		int km_godz;
};

class Lodka
{
	public:
		int wezly;
};

class Amfibia : public Lodka, public Auto
{
};

class PodwodnaAmfibia : public Amfibia
{
	int zanurzenie;
};

int main()
{
	Amfibia kaczka;
	kaczka.wezly = 6;
	kaczka.km_godz = 10;

	PodwodnaAmfibia zabcia;
	zabcia.zanurzenie = 8;
	zabcia.wezly = 5;
	zabcia.km_godz = 1;
	
	return 0;
}