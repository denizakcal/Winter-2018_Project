
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
	virtual void displayCurrentSnapshotOfGame() = 0;
	virtual void displayPauseScreen() = 0;
	virtual void displayMainMenuScreen() = 0;
	virtual void displayMapSelectionScreen() = 0;
	virtual void displayNumbefOfPlayersSelectionScreen() = 0;
};

#endif /* USERINTERFACE_H_ */
