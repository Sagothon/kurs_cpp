#include "randomizer.h"

#include <cstdlib>
#include <ctime>

void Randomizer::initialize(unsigned int initValue)
{
	srand(initValue);
}

void Randomizer::initialize()
{
	srand(time(NULL));
}


unsigned int Randomizer::getRandom(unsigned int max)
{
	return rand()%(max+1);
}


unsigned int Randomizer::getRandom(unsigned int min, unsigned int max)
{
	if (min == max)
		return min;
    else if (min > max)
	{
		unsigned tmp = min;
		min=max;
		max=tmp;
	}
	unsigned width = max-min;
	return rand()%(width+1) + min;
}


