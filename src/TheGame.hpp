
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
		Player* currentPlayer;
		const int MAXIMUM_AMOUNT_OF_TURNS_PER_PLAYER = 10;
		int maximumAmountOfTurnsInTotal;
		std::vector<Player*> players;
		UserInterface* userInterface;
		int totalAmountOfTurnsSoFar;
		int turnOfPlayerN = 1;
		void init(std::vector<Player*> players, UserInterface* userInterface, int totalAmountOfTurnsSoFar);

	public:
		/*TheGame(std::vector<Player> players);*/
		TheGame(std::vector<Player*> players, UserInterface* userInterface);
		TheGame(std::vector<Player*> players, UserInterface* userInterface, int totalAmountOfTurnsSoFar);
		void run();
		int getAmountOfPlayers();
		bool isRollEnough(std::vector<Player*> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		bool isConquerableWithoutRoll(std::vector<Player*> players, int playerNumberOfAttackingPlayer, RegionsOfMaps regionToPotentiallyConquer, int multiplicityOfAttackingRaceTokens);
		void updateGame(TheGame);
		bool gameHasNextTurn();
		void incrementTurn();
		void implementMove(UserInterfaceCodes code);
};

#endif /* THEGAME_HPP_ */
