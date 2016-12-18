/*
 * wielblad.h
 *
 *  Created on: 23 lip 2013
 *      Author: Emergency
 */

#ifndef WIELBLAD_H_
#define WIELBLAD_H_

#include "zwierze.h"

class Wielblad: public Zwierze {
public:
	Wielblad();
	const char * czymJestem() const;
	int ileKonczyn();
	~Wielblad();
};

#endif /* WIELBLAD_H_ */
