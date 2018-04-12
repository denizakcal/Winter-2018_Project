
#ifndef GAMEBOARD_HPP_
#define GAMEBOARD_HPP_

#include "RegionsOfMaps.hpp"
#include <map>
#include <vector>

namespace GameBoard {

	void buildGameBoard(int numberOfPlayers);

	RegionsOfMaps nextRegion();

	bool isAtBeginning();

	bool isAtEnd();

	std::vector<RegionsOfMaps> getAdjacentRegions(RegionsOfMaps r);
}


#endif /* GAMEBOARD_HPP_ */
