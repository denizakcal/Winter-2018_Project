#include "Graph.hpp"

#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
//#include <boost/graph/graph_traits.hpp>
//#include <boost/graph/adjacency_list.hpp>
//#include <boost/graph/connected_components.hpp>
//#include <boost/graph/subgraph.hpp>
#include "RegionsOfMaps.hpp"
#include "GameBoard.hpp"

using namespace boost;
using namespace std;
using namespace GameBoard;

//std::map< RegionsOfMaps, std::vector<RegionsOfMaps> > Graph::masterAdjacencyList;
//std::map<RegionsOfMaps,std::vector<RegionsOfMaps>>::iterator theIterator;

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

	this->playerConqueredRegions.push_back(region);
	this->regionInformation.insert( make_pair(region, vertexData) );
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
		std::vector<RegionsOfMaps> regionsAdjacentToCurrentConqueredRegion = GameBoard::getAdjacentRegions(currentConqueredRegion);

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

VertexData Graph::getDataOfVertex(RegionsOfMaps r) {

	return this->regionInformation.at(r);
}

Graph::~Graph() {

	// code
} 
