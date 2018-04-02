#include "TextualUserInterface.hpp"

TextualUserInterface::TextualUserInterface(std::vector<Player> players, bool* isPaused, int* turnOfPlayerN) : UserInterface(players, isPaused, turnOfPlayerN) {
	/*Nothing more than just calling parent class' constructor.*/
}

void TextualUserInterface::displayCurrentSnapshotOfGame() {

	if(*isPaused) {
		std::cout << "The game is now resumed." << std::endl;
	}
	*isPaused = false;

	std::cout << "Here's what each region on the map contains.:" << std::endl;
	// WRITE THE CODE THAT DISPLAYS EACH REGION AND WHAT IS CONTAINED
}

void TextualUserInterface::displayPauseScreen() {

	std::cout << "The game is now paused." << std::endl;
	*isPaused = true;

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

		std::cout << "The game is now being resumed." << std::endl;
		displayCurrentSnapshotOfGame(); // The displayCurrentSnapshotOfGame() method takes care of the *isPaused = false; code.
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

	int choice;
	std::cin >> choice;

	if(choice == 1) {

		displayNumberOfPlayersSelectionScreen();
		displayCurrentSnapshotOfGame();
	}
	else /* if(choice == 2) */ {

//		std::cout << "Saving the game." << std::endl;
		//saveGame();
	}
}

void TextualUserInterface::displayMapSelectionScreen() {

	// Isn't there only one map per amount of players? I believe that this method shouldn't be required. I'm leaving it here, for now, just in case. TODO
	std::cout << "TODO" << std::endl;
}

void TextualUserInterface::displayNumberOfPlayersSelectionScreen() {

	std::cout << "Enter the amount of players that will be playing this game.:" << std::endl;
	std::cin >> numberOfPlayers;

	while( !(numberOfPlayers >= 2 && numberOfPlayers <= 5) ) {

		std::cout << "An invalid amount of players has been entered." << std::endl;
		std::cout << "Enter the amount of players that will be playing this game.:" << std::endl;
		std::cin >> numberOfPlayers;
	}
}

void TextualUserInterface::makeMove() {

	int choice;

	std::cout << "What would you like to do?" << std::endl;
	std::cout << "The options are the following.:" << std::endl;

	if(true) {//if( players.at(pl)->hasActiveRace() || playerNYo.hasGhoulsOrWtv() ) {

		std::cout << "N) Put active race in decline." << std::endl;
		std::cout << "N) Attempt to conquer a region." << std::endl;
	}
	else {

		std::cout << "N) Choose (another) race + power-badge combination (if there ." << std::endl;
	}

	std::cin >> choice;

	//std::cout << "N) XYZ" << std::endl;
}
