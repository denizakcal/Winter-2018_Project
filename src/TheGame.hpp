
#ifndef THEGAME_HPP_
#define THEGAME_HPP_

#include "list"
#include "Player.h"

class TheGame {

	TheGame(std::vector<Player> players);

	public:

		void run();
		int getAmountOfPlayers();
		int roll(void);

	private:
		bool nextTurn();
		const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
		int maximumAmountOfTurnsInTotal;
		std::vector<Player> players;
		int totalTurnsSoFar;
		int turnOfPlayerN = 1;
};

#endif /* THEGAME_HPP_ */
