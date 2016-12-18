#ifndef ITEM_H_
#define ITEM_H_

class Chest;

#include "chest.h"

class Item {
public:
	bool doIBelong(Chest &chest);
};


#endif /* ITEM_H_ */
