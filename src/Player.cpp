
#ifndef PLAYER_CPP_
#define PLAYER_CPP_

#include "Player.hpp"
#include "VertexData.hpp"

#include <string>

/*std::vector<Player> Player::generatePlayers() {


}*/

/*Player::Player() { // THE BODY OF THIS CONSTRUCTOR NEEDS IMPROVEMENT!!!

	this->Player(0,nullptr,"Player " + amountOfPlayers+1,0,NULL,NULL,NULL,NULL,NULL,amountOfPlayers+1,NULL);
}*/

Player::Player(int multiplicityOfRaceTokensNotOnBoard, Graph* subgraph, std::string name, int numberOfCoins, std::vector<RegionsOfMaps> conqueredRegions,std::vector<Races> racesInConqueredRegions, std::vector<int> racesMultiplicity, std::vector<PowerBadges> powerBadges, std::vector< std::vector<RegionPieces> > regionPiecesSets, int playerNumber, std::map<int,int> pipToTimesRolledMap) {

	this->multiplicityOfRaceTokensNotOnBoard = multiplicityOfRaceTokensNotOnBoard;
	this->subgraph = subgraph;
	this->name = name;
	this->numberOfCoins = numberOfCoins;

	for(unsigned int i = 0; i < conqueredRegions.size(); i++) {

		VertexData regionData;
		regionData.race = racesInConqueredRegions.at(i);
		regionData.raceMultiplicity = racesMultiplicity.at(i);
		regionData.powerBadge = powerBadges.at(i);
		regionData.regionPieces = regionPiecesSets.at(i);

		subgraph->addRegionPlusData( conqueredRegions.at(i), regionData );
	}

	this->playerNumber = playerNumber;
	this->pipToTimesRolledMap = pipToTimesRolledMap;

	amountOfPlayers++;
}

void Player::setName(std::string name) {

	this->name = name;
}

std::string Player::getName() {

	return name;
}

void Player::setSubgraph(Graph* subgraph) {

	this->subgraph = subgraph;
}

bool Player::isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer) {

	return subgraph->isAdjacentToConquered(regionToPotentiallyConquer);
}

bool Player::isConquered(RegionsOfMaps r) {

	return subgraph->contains(r);
}

int Player::getMultiplicityOfRaceTokensInGivenRegion(RegionsOfMaps r) {

	return -1;
}

int Player::roll(void) {

	int r;
	srand(time(NULL));
	r = rand() % 6 + 1;

		switch(r) {

		case 1: {} // Three sides of the die have the number 0.
		case 2: {} // Three sides of the die have the number 0.
		case 3: { // Three sides of the die have the number 0.
			pipToTimesRolledMap.at(0) = pipToTimesRolledMap.at(0) + 1;
			return 0;
		}

		case 4: {
			pipToTimesRolledMap.at(1) = pipToTimesRolledMap.at(1) + 1;
			return 1;
		}

		case 5: {
			pipToTimesRolledMap.at(2) = pipToTimesRolledMap.at(2) + 1;
			return 2;
		}

		case 6: {
			pipToTimesRolledMap.at(3) = pipToTimesRolledMap.at(3) + 1;
			return 3;
		}

	}

		return -1;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

#endif /* PLAYER_HPP_ */
