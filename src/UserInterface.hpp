
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

#include "Graph.hpp"

class UserInterface {
public:
	UserInterface();
	virtual ~UserInterface();
	Graph loadMap(std::string fileName);
	void saveMap(Graph gameMap);
};

#endif /* USERINTERFACE_H_ */
