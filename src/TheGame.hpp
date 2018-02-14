
#ifndef THEGAME_HPP_
#define THEGAME_HPP_

#include "list"
#include "Player.h"

class TheGame {

	TheGame(std::list<Player> players);

	int getAmountOfPlayers();

	public: void run();

	private: bool nextTurn();
};

#endif /* THEGAME_HPP_ */
