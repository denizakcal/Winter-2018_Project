#include <vector>
#include "Player.hpp"
#include "TheGame.hpp"
#include <ctime>
#include <iostream>

const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
int maximumAmountOfTurnsInTotal;
std::vector<Player> players;
int totalTurnsSoFar;
int turnOfPlayerN = 1;

TheGame::TheGame(std::vector<Player> players) {

	// Stuff specific to any object/instance of this class
	this->players = players;
	this->totalTurnsSoFar = 0;
	this->maximumAmountOfTurnsInTotal = MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER*getAmountOfPlayers();
}

int TheGame::getAmountOfPlayers() {

	return players.size();
}

void TheGame::run() {

	while( totalTurnsSoFar < maximumAmountOfTurnsInTotal ) {

		// gameplay continues
	}
}

bool TheGame::nextTurn() { // false if there are no more turns; true if there are more turns

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

bool TheGame::isRollEnough(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens) { // is the die roll enough to conquer a region

	int dieAmount = roll();
	Player attackingPlayer = players.at(playerNumberOfAttackingPlayer-1); // the players are added in order of playerNumber to the vector

	Player* defendingPlayer;

	for(int i = 0; i < players.size(); i++) {

		if( players.at(i).isConquered(regionToPotentiallyConquer) ) {

			*defendingPlayer = players.at(i);
		}
	}

	return attackingPlayer.isAdjacentToConquered(regionToPotentiallyConquer) && multiplicityOfAttackingRaceTokens >= 1 && (multiplicityOfAttackingRaceTokens+dieAmount)-defendingPlayer->getMultiplicityOfRaceTokensInGivenRegion(regionToPotentiallyConquer);
}

bool TheGame::isConquerableWithoutRoll(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer) {

	// code
}

int TheGame::roll(void) {

	int r;
	srand(time(NULL));
	r = rand() % 6 + 1;

		switch(r) {

		case 1: {} // Three sides of the die have the number 0.
		case 2: {} // Three sides of the die have the number 0.
		case 3: { // Three sides of the die have the number 0.
			return 0;
		}

		case 4: {
			return 1;
		}

		case 5: {
			return 2;
		}

		case 6: {
			return 3;
		}

	}

//		return -1;
}
