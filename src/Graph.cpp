#include "Graph.hpp"

#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>
#include <boost/graph/subgraph.hpp>

#include "RegionsOfMaps.hpp"

using namespace boost;
using namespace std;

std::map< RegionsOfMaps, std::vector<RegionsOfMaps> > Graph::masterAdjacencyList;

Graph::Graph(int numberOfPlayers_) {
	numberOfPlayers = numberOfPlayers_;
}

//method for to add vertices to empty graph or subgraph
//void Graph::addRegion(BoostGraph G0, RegionsOfMaps region) {
//
//	//typedef labels
//	typedef boost::graph_traits<BoostGraph>::vertex_descriptor vertex;
//	typedef boost::graph_traits<BoostGraph>::edge_descriptor edge;
//
//
//	vertex v = boost::add_vertex(G0);
//
//	edge e;
//	bool added;
//
//	//boost::tie(e, added) = boost::add_edge()
//
//}

void Graph::addRegionPlusData(RegionsOfMaps region, VertexData vertexData) {

	// TODO
}

void Graph::buildMap() {

		int chooseGraph = getNumberOfPlayers();

		//hardcode each graph configuration (2,3,4,5 player maps)
		switch (chooseGraph) {

			// TWO PLAYERS --------------------------------------------------------------
			case 2: {

				// For TWO_PLAYER_MAP__MOUNTAIN_ONE + regions adjacent to it
				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
				std::vector<RegionsOfMaps> regionsAdjacentToCurrentRegion;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

//				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
//				std::vector<RegionsOfMaps>* regionsAdjacentToCurrentRegion = new std::vector<RegionsOfMaps>;
//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
//				masterAdjacencyList.insert( std::make_pair(currentRegion,*regionsAdjacentToCurrentRegion) );
//				delete regionsAdjacentToCurrentRegion;

//				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
//				std::vector< std::vector<RegionsOfMaps> > regionsAdjacentToCurrentRegion;
//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
//				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion.at(0)) );

				// For TWO_PLAYER_MAP__MOUNTAIN_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__MOUNTAIN_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__MOUNTAIN_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FARMLAND_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FARMLAND_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FARMLAND_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FARMLAND_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );

				// TWO_PLAYER_MAP__HILL_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FOREST_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

			break;
		}

		// THREE PLAYERS --------------------------------------------------------------
		case 3: {

			// code TODO
			break;
		}
	}
}

bool Graph::isAlreadyConquered(RegionsOfMaps potentiallyAlreadyConqueredRegion) {

	for(unsigned int i = 0; i < playerConqueredRegions.size(); i++) {

		if( potentiallyAlreadyConqueredRegion == playerConqueredRegions.at(i) ) {

			return true;
		}
	}

	return false;
}

bool Graph::isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer) {

	for(unsigned int i = 0; i < playerConqueredRegions.size(); i++) {

		RegionsOfMaps currentConqueredRegion = playerConqueredRegions.at(i);
		std::vector<RegionsOfMaps> regionsAdjacentToCurrentConqueredRegion = masterAdjacencyList.at(currentConqueredRegion);

		for(unsigned int j = 0; j < regionsAdjacentToCurrentConqueredRegion.size(); j++) {

			if( regionToPotentiallyConquer == regionsAdjacentToCurrentConqueredRegion.at(j) ) {

				return true;
			}
		}
	}

	return false;
}

/*bool Graph::isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer) {

	std::vector<RegionsOfMaps> yo = masterAdjacencyList.at(regionToPotentiallyConquer);

//	RegionsOfMaps currentRegionThatIsAlreadyConqueredByThisPlayer = playerAdjacencyList.begin();

	for(RegionsOfMaps currentConqueredRegion = playerAdjacencyList.begin(); currentConqueredRegion != playerAdjacencyList.end(); ++currentConqueredRegion) {

		if( masterAdjacencyList.count(currentConqueredRegion) != 0 ) {

			if( masterAdjacencyList.at(currentConqueredRegion) == regionToPotentiallyConquer ) { // is regionToPotentiallyConquer adjacent to currentConqueredRegion

				return true;
			}
		}
	}

	return false;
}*/

Graph::~Graph() {

	// code
}
