
#ifndef PLAYER_CPP_
#define PLAYER_CPP_
#include "Player.hpp"

#include <string>

Player::Player(int multiplicityOfRaceTokensNotOnBoard, Graph* subgraph, std::string name, int numberOfCoins, std::vector<RegionsOfMaps> conqueredRegions,std::vector<Races> racesInConqueredRegions, std::vector<int> racesMultiplicity, std::vector<PowerBadges> powerBadges, std::vector<RegionPieces> regionPieces) {

	this->multiplicityOfRaceTokensNotOnBoard = multiplicityOfRaceTokensNotOnBoard;
	this->subgraph = subgraph;
	this->name = name;
	this->numberOfCoins = numberOfCoins;
	this->conqueredRegions = conqueredRegions;
	this->racesInConqueredRegions = racesInConqueredRegions;
	this->racesMultiplicity = racesMultiplicity;
	this->powerBadges = powerBadges;
	this->regionPieces = regionPieces;
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

Player::~Player() {
	// TODO Auto-generated destructor stub
}

#endif /* PLAYER_HPP_ */
