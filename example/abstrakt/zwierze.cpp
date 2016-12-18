/*
 * Zwierze.cpp
 *
 *  Created on: 23 lip 2013
 *      Author: Emergency
 */


#include "zwierze.h"

// Pure virtual metoda moze miec cialo
const char * Zwierze::czymJestem() const {
	return 0;
}


/*
 * Zakomentuj Zwierze::~Zwierze() aby pokazac koniecznosc
 * posiadania ciala pure virtual desktruktora
 */
Zwierze::~Zwierze()   {}

int Zwierze::ileKonczyn() {
	return 0;
}
