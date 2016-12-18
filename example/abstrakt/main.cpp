/*
 * main.cpp
 *
 *  Created on: 23 lip 2013
 *      Author: Emergency
 */

#include <iostream>

#include "zwierze.h"
#include "wielblad.h"


using namespace std;

int main()
{
	Wielblad felek;
	cout<<"Felek to jest "<<felek.czymJestem()<<endl;
	cout<<"Felek ma "<<felek.ileKonczyn()<<" nog"<<endl;

	Zwierze &domowy = felek;
	cout<<"Zwierzak domowy to "<<domowy.czymJestem()<<endl;
	cout<<"Zwierzak domowy ma "<<domowy.ileKonczyn()<<" nog"<<endl;

	Zwierze *nieznane = &felek;
	cout<<"Nieznane zwierze to "<<nieznane->czymJestem()<<endl;
	cout<<"Nieznane zwierze ma "<<nieznane->ileKonczyn()<<" nog"<<endl;

	// Czy to sie skompiluje?
	// Zwierze pies;



	return 0;
}

