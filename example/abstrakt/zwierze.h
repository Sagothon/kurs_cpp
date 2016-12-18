/*
 * Zwierze.h
 *
 *  Created on: 23 lip 2013
 *      Author: Emergency
 */

#ifndef ZWIERZE_H_
#define ZWIERZE_H_

class Zwierze {
protected:
	char *nazwa;
public:
	virtual const char * czymJestem() const = 0;
	int ileKonczyn();

	virtual ~Zwierze() = 0;
};


#endif /* ZWIERZE_H_ */
