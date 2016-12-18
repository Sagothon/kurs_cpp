#include "item.h"

bool Item::doIBelong(Chest &chest)
{
	return chest.item == this;
}


