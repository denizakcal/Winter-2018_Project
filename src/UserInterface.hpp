
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

//#include "TheGame.hpp"
class TheGame;
#include "Graph.hpp"
#include "Player.hpp"
#include <vector>

class UserInterface {
	protected:
		int numberOfPlayers;// = 0;
		bool* isPaused;// = false;
		std::vector<Player> players;
		int* turnOfPlayerN;

	public:
		UserInterface(std::vector<Player> players, bool* isPaused, int* turnOfPlayerN);
		virtual ~UserInterface();
		TheGame loadGame(std::string fileName);
		void saveGame(TheGame theGame);
		virtual void displayCurrentSnapshotOfGame() = 0;
		virtual void displayPauseScreen() = 0;
		virtual void displayMainMenuScreen() = 0;
		virtual void displayMapSelectionScreen() = 0;
		virtual void displayNumberOfPlayersSelectionScreen() = 0;
		virtual void makeMove() = 0;
};

#endif /* USERINTERFACE_H_ */
