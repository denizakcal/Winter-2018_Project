
#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <iostream>
#include "RegionsOfMaps.hpp"
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>
#include "VertexData.hpp"

/*struct VertexData
{
	RegionsOfMaps region_name; //?
};*/

struct EdgeData
{
	std::string edge_name;
	double dist; //not sure if we need this yet
};

class Graph {

private:
	int numberOfPlayers;
	//create typedef for graph type
	typedef boost::adjacency_list
		<boost::vecS,
		boost::vecS,
		boost::undirectedS,
		VertexData, EdgeData
		>BoostGraph;

	//instantiate graph type
	BoostGraph g;
public:
	Graph(int numberOfPlayers_);
	virtual ~Graph();
	int getNumberOfPlayers() {return numberOfPlayers;}
	void buildMap();
	void addRegionPlusData(RegionsOfMaps region, VertexData vertexData);
	bool isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer);
	bool contains(RegionsOfMaps r);
};

#endif /* GRAPH_HPP_ */
