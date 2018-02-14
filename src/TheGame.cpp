#include <list>
#include "Player.h"

class TheGame {

	private: const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
	private: int maximumAmountOfTurnsInTotal;
	private: std::list<Player> players;
	private: int totalTurnsSoFar;
	private: int turnOfPlayerN = 1;

	TheGame(std::list<Player> players) {

		// Stuff specific to any object/instance of this class
		this->players = players;
		this->totalTurnsSoFar = 0;
		this->maximumAmountOfTurnsInTotal = MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER*getAmountOfPlayers();
	}

	int getAmountOfPlayers() {

		return players.size();
	}

	void run(int x) {

		while( totalTurnsSoFar < maximumAmountOfTurnsInTotal ) {

			// gameplay continues
		}
	}

	private: bool nextTurn() { // false if there are no more turns; true if there are more turns

		if( totalTurnsSoFar == maximumAmountOfTurnsInTotal ) {

			return false;
		}
		else if( turnOfPlayerN == getAmountOfPlayers() ) {

			turnOfPlayerN = 1;
			return true;
		}
		else {

			turnOfPlayerN++;
			return true;
		}
	}
};
