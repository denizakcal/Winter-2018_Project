
#ifndef GAMEMAP_HPP_
#define GAMEMAP_HPP_

#include <iostream>
#include "RegionsOfMaps.hpp"



class GameMap {

private:
	int numberOfPlayers;
public:
	GameMap(int numberOfPlayers_) {
		numberOfPlayers = numberOfPlayers_;
	}
	virtual ~GameMap();
	int getNumberOfPlayers() {return numberOfPlayers;}
	void buildMap();
};

#endif /* GAMEMAP_HPP_ */
