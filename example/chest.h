#ifndef CHEST_H_
#define CHEST_H_

class Item;

#include "item.h"


class Chest {
	Item *item;

public:
	void set(Item *it);
	friend class Item;

};


#endif /* CHEST_H_ */
