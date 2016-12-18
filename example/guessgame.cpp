#include "guessgame.h"




void GuessGame::searchFor(unsigned number)
{
	searchedNumber=number;
}

unsigned GuessGame::guess(unsigned number)
{
	if (number > searchedNumber)
		return TOO_MUCH;
	else if (number < searchedNumber)
		return TOO_LITTLE;

	return SCORE;
}
