
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include "Graph.hpp"

class Player {
public:
	std::string name;
	Graph* subGraph = nullptr;

	Player();
	virtual ~Player();
	void setName(std::string name);
	void setGraph(Graph* subGraph);
};

#endif /* PLAYER_HPP_ */
