

#ifndef VERTEXDATA_HPP_
#define VERTEXDATA_HPP_

#include "RegionsOfMaps.hpp"
#include "Races.hpp"
#include "PowerBadges.hpp"
#include "RegionPieces.hpp"
#include <vector>

struct VertexData {

	//std::map<RegionsOfMaps, Races> RegionsOfMaps_To_Races;
	//RegionsOfMaps region_name; // SHOULD THIS BE REMOVED?!!!
	Races race;
	int raceMultiplicity;
	PowerBadges powerBadge;
	std::vector<RegionPieces> regionPieces; // there may be more than one region piece per region
};

#endif /* VERTEXDATA_HPP_ */
