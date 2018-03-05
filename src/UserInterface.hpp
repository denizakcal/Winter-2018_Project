
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

#include "TheGame.hpp"
#include "Graph.hpp"

class UserInterface {
public:
	UserInterface();
	virtual ~UserInterface();
	TheGame loadGame(std::string fileName);
	void saveGame(TheGame theGame);
};

#endif /* USERINTERFACE_H_ */
