
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

#include "GameMap.hpp"

class UserInterface {
public:
	UserInterface();
	virtual ~UserInterface();
	GameMap loadMap();
	void saveMap(GameMap gameMap);
};

#endif /* USERINTERFACE_H_ */
