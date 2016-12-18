#include <iostream>
#include "randomizer.h"
#include "guessgame.h"

using namespace std;

int main () {
	Randomizer gameRandomizer;
	GuessGame  game;
	gameRandomizer.initialize();
	unsigned searched = gameRandomizer.getRandom(10);
	game.searchFor(searched);


	unsigned tries = 0;
	unsigned min=0,max=10;
	while (tries<4)
	{
		unsigned guessedNumber = gameRandomizer.getRandom(min,max);
		unsigned r = game.guess(guessedNumber);

		switch(r)
		{
			case TOO_MUCH:
				cout<<"Computer guessed "<<guessedNumber<<" it's too much"<<endl;
				max=guessedNumber-1;
			break;
			case TOO_LITTLE:
				cout<<"Computer guessed "<<guessedNumber<<" it's too little"<<endl;
				min=guessedNumber+1;
			break;
			case SCORE:
				cout<<"Computer manage to guess in "<<tries+1<<" tries, the number is: "<<guessedNumber<<endl;
				return 0;
			break;
		}
		tries++;
	}
	cout<<"Computer didn't manage to guess the number "<<searched<<" in "<<tries<<" tries"<<endl;
	return 0;
}



