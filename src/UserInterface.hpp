
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

#include "GameMap.hpp"

class UserInterface {
public:
	UserInterface();
	virtual ~UserInterface();
	GameMap loadMap();
};

#endif /* USERINTERFACE_H_ */
