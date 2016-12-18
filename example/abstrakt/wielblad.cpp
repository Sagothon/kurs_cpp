/*
 * wielblad.cpp
 *
 *  Created on: 23 lip 2013
 *      Author: Emergency
 */

#include "wielblad.h"
#include <cstring>

const char * Wielblad::czymJestem() const {
	return nazwa;
}



Wielblad::Wielblad() {
	nazwa = new char[9];
	strcpy(nazwa,"Wielblad");
}


Wielblad::~Wielblad() {
	delete [] nazwa;
}

int Wielblad::ileKonczyn() {
	return 4;
}
