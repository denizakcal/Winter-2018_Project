
#ifndef TEXTUALUSERINTERFACE_HPP_
#define TEXTUALUSERINTERFACE_HPP_

#include "UserInterface.hpp"


class TextualUserInterface : public UserInterface {

	public:
		TextualUserInterface();
		virtual void displayCurrentSnapshotOfGame();
		virtual void displayPauseScreen();
		virtual void displayMainMenuScreen();
		virtual void displayMapSelectionScreen();
		virtual void displayNumbefOfPlayersSelectionScreen();
};


#endif /* TEXTUALUSERINTERFACE_HPP_ */
