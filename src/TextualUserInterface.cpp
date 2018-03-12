#include "TextualUserInterface.hpp"

TextualUserInterface::TextualUserInterface() {

	// TODO
}

void TextualUserInterface::displayCurrentSnapshotOfGame() {

	if(isPaused) {
		std::cout << "The game is now resumed." << std::endl;
	}
	isPaused = false;

	std::cout << "Here's what each region on the map contains.:" << std::endl;
}

void TextualUserInterface::displayPauseScreen() {

	std::cout << "The game is now paused." << std::endl;
	isPaused = true;

	std::cout << "Here are your options.:" << std::endl;
	std::cout << "1) Resume the game." << std::endl;
	std::cout << "2) Save the game." << std::endl;

	int choice;
	std::cin >> choice;

	while( choice != 1 && choice != 2 ) {

		std::cout << "You entered an invalid choice." << std::endl;
		std::cin >> choice;
	}

	if(choice == 1) {

		displayCurrentSnapshotOfGame();
	}
	else /* if(choice == 2) */ {

		std::cout << "Saving the game." << std::endl;
		//saveGame();
	}
}

void TextualUserInterface::displayMainMenuScreen() {

	std::cout << "Welcome to the main menu." << std::endl;

	std::cout << "Here are your options.:" << std::endl;
	std::cout << "1) Start a new game." << std::endl;
	std::cout << "2) Load an already-existing game." << std::endl;
}

void TextualUserInterface::displayMapSelectionScreen() {

	// Isn't there only one map per amount of players? I believe that this method shouldn't be required. I'm leaving it here, for now, just in case. TODO
	std::cout << "TODO" << std::endl;
}

void TextualUserInterface::displayNumbefOfPlayersSelectionScreen() {

	std::cout << "Enter the amount of players that will be playing this game.:" << std::endl;
	std::cin >> numberOfPlayers;

	while( !(numberOfPlayers >= 2 && numberOfPlayers <= 5) ) {

		std::cout << "An invalid amount of players has been entered." << std::endl;
		std::cout << "Enter the amount of players that will be playing this game.:" << std::endl;
		std::cin >> numberOfPlayers;
	}
}
