#include "TextualUserInterface.hpp"

void TextualUserInterface::displayCurrentSnapshotOfGame() {

	std::cout << "The game is now resumed." << std::endl;
	isPaused = false;
}

void TextualUserInterface::displayPauseScreen() {

	std::cout << "The game is now paused." << std::endl;
	isPaused = true;

	std::cout << "Here are your options.:" << std::endl;
	std::cout << "1) Resume the game." << std::endl;
	std::cout << "2) Save the game." << std::endl;
}

void TextualUserInterface::displayMainMenuScreen() {

	std::cout << "Welcome to the main menu." << std::endl;

	std::cout << "Here are your options.:" << std::endl;
	std::cout << "1) Start a new game." << std::endl;
	std::cout << "2) Load an already-existing game." << std::endl;
}

void TextualUserInterface::displayMapSelectionScreen() {

	// isn't there only one map per amount of players? TODO
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
