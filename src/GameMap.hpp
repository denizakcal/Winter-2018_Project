
#ifndef GAMEMAP_HPP_
#define GAMEMAP_HPP_

#include <iostream>
#include "RegionsOfMaps.h"

struct VertexData {

	RegionsOfMaps region_name; //?
};

struct EdgeData {

	std::string edge_name;
	double dist; //not sure if we need this yet
};

class GameMap {
public:
	GameMap();
	virtual ~GameMap();
	void buildMap();
};

#endif /* GAMEMAP_HPP_ */
