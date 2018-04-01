
#ifndef TEXTUALUSERINTERFACE_HPP_
#define TEXTUALUSERINTERFACE_HPP_

#include "UserInterface.hpp"
#include "Player.hpp"
#include <vector>


class TextualUserInterface : public UserInterface {

	public:
		TextualUserInterface(std::vector<Player> players);
		virtual void displayCurrentSnapshotOfGame();
		virtual void displayPauseScreen();
		virtual void displayMainMenuScreen();
		virtual void displayMapSelectionScreen();
		virtual void displayNumberOfPlayersSelectionScreen();
};


#endif /* TEXTUALUSERINTERFACE_HPP_ */
