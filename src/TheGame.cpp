#include <vector>
#include "Player.hpp"
#include "TheGame.hpp"
#include <ctime>
#include <iostream>
#include "TextualUserInterface.hpp"

const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
int maximumAmountOfTurnsInTotal;
std::vector<Player> players;
int totalTurnsSoFar = 0;
int turnOfPlayerN = 1;

/*TheGame::TheGame(std::vector<Player> players) {

	TextualUserInterface tui(players);
	init(players, &tui);
}*/

TheGame::TheGame(std::vector<Player> players, UserInterface* userInterface) {

	init(players, userInterface, 0);
}

TheGame::TheGame(std::vector<Player> players, UserInterface* userInterface, int totalAmountOfTurnsSoFar) {

	init(players, userInterface, totalAmountOfTurnsSoFar);
}

void TheGame::init(std::vector<Player> players, UserInterface* userInterface, int totalAmountOfTurnsSoFar) {

	// Stuff specific to any object/instance of this class
	this->players = players;
	this->totalAmountOfTurnsSoFar = totalAmountOfTurnsSoFar;
	this->maximumAmountOfTurnsInTotal = MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER*getAmountOfPlayers();

	this->userInterface = userInterface;
}

int TheGame::getAmountOfPlayers() {

	return players.size();
}

void TheGame::run() {

	while( gameHasNextTurn() ) {

		if( totalAmountOfTurnsSoFar == 0 ) {

			userInterface->displayMainMenuScreen();
		}
		else {

			userInterface->displayCurrentSnapshotOfGame();
		}

		userInterface->makeMove();

		incrementTurn();
	}
}

bool TheGame::gameHasNextTurn() { // false if there are no more turns; true if there are more turns

	if( totalAmountOfTurnsSoFar == maximumAmountOfTurnsInTotal ) {

		return false;
	}
	else {

		return true;
	}
}

void TheGame::incrementTurn() { // modifies the field, turnOfPlayerN, which represents the number of the player whose turn it is

	if( turnOfPlayerN == getAmountOfPlayers() ) {

		turnOfPlayerN = 1;
	}
	else {

		turnOfPlayerN++;
	}

	totalAmountOfTurnsSoFar++;
}

bool TheGame::isRollEnough(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens) { // is the die roll enough to conquer a region

	Player attackingPlayer = players.at(playerNumberOfAttackingPlayer-1); // the players are added in order of playerNumber to the vector
	int dieAmount = attackingPlayer.roll();

	Player* defendingPlayer;

	for(unsigned int i = 0; i < players.size(); i++) {

		if( players.at(i).isConquered(regionToPotentiallyConquer) ) {

			*defendingPlayer = players.at(i);
		}
	}

	return attackingPlayer.isAdjacentToConquered(regionToPotentiallyConquer) && multiplicityOfAttackingRaceTokens >= 1 && (multiplicityOfAttackingRaceTokens+dieAmount)-defendingPlayer->getMultiplicityOfRaceTokensInGivenRegion(regionToPotentiallyConquer);
}

bool TheGame::isConquerableWithoutRoll(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens) {

	Player attackingPlayer = players.at(playerNumberOfAttackingPlayer-1); // the players are added in order of playerNumber to the vector

	Player* defendingPlayer;

	for(unsigned int i = 0; i < players.size(); i++) {

		if( players.at(i).isConquered(regionToPotentiallyConquer) ) {

			*defendingPlayer = players.at(i);
		}
	}

	return attackingPlayer.isAdjacentToConquered(regionToPotentiallyConquer) && multiplicityOfAttackingRaceTokens >= 1 && multiplicityOfAttackingRaceTokens - defendingPlayer->getMultiplicityOfRaceTokensInGivenRegion(regionToPotentiallyConquer);
}

void TheGame::updateGame(TheGame updatedGame) {

	// Make all the fields of this (TheGame) take the values of updatedGame's fields
}
