
#ifndef GAMEMAP_HPP_
#define GAMEMAP_HPP_

#include <iostream>
#include "RegionsOfMaps.hpp"
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>

struct VertexData
{
	RegionsOfMaps region_name; //?
};

struct EdgeData
{
	std::string edge_name;
	double dist; //not sure if we need this yet
};

class GameMap {

private:
	int numberOfPlayers;
	//create typedef for graph type
	typedef boost::adjacency_list
		<boost::vecS,
		boost::vecS,
		boost::undirectedS,
		VertexData, EdgeData
		>GraphType;

	//instantiate graph type
	GraphType g;
public:
	GameMap(int numberOfPlayers_) {
		numberOfPlayers = numberOfPlayers_;
	}
	virtual ~GameMap();
	int getNumberOfPlayers() {return numberOfPlayers;}
	void buildMap();
	void addRegion(GraphType g, RegionsOfMaps region);

};

#endif /* GAMEMAP_HPP_ */
