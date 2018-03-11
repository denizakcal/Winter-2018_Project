
#ifndef THEGAME_HPP_
#define THEGAME_HPP_

#include <vector>
#include "Player.hpp"
#include "RegionsOfMaps.hpp"

class TheGame {

	private:
		const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
		int maximumAmountOfTurnsInTotal;
		std::vector<Player> players;
		int totalTurnsSoFar;
		int turnOfPlayerN = 1;

	public:
		TheGame(std::vector<Player> players);
		void run();
		int getAmountOfPlayers();
		bool isRollEnough(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		bool isConquerableWithoutRoll(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		void updateGame(TheGame);
		bool nextTurn();
};

#endif /* THEGAME_HPP_ */
