
#ifndef THEGAME_HPP_
#define THEGAME_HPP_

#include <vector>
#include "Player.hpp"
#include "RegionsOfMaps.hpp"
#include "UserInterface.hpp"
//#include "TextualUserInterface.hpp"
class UserInterface;

class TheGame {

	private:
		const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
		int maximumAmountOfTurnsInTotal;
		std::vector<Player> players;
		UserInterface* userInterface;
		int totalTurnsSoFar;
		int turnOfPlayerN = 1;
		void init(std::vector<Player> players, UserInterface* userInterface);

	public:
		TheGame(std::vector<Player> players);
		TheGame(std::vector<Player> players, UserInterface* userInterface);
		void run();
		int getAmountOfPlayers();
		bool isRollEnough(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		bool isConquerableWithoutRoll(std::vector<Player> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		void updateGame(TheGame);
		bool nextTurn();
};

#endif /* THEGAME_HPP_ */
