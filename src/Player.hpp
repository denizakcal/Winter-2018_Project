
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include "Graph.hpp"
#include <vector>
#include "Races.hpp"
#include "PowerBadges.hpp"
#include "RegionsOfMaps.hpp"
#include "RegionPieces.hpp"
#include <map>

class Player {

	private:
		std::string name;
		Graph* subgraph = nullptr;
		int multiplicityOfRaceTokensNotOnBoard;
		int numberOfCoins;
		//std::vector<RegionsOfMaps> conqueredRegions;
		std::vector<Races> racesInConqueredRegions;
		std::vector<int> racesMultiplicity;
		std::vector<PowerBadges> powerBadges;
		std::vector< std::vector<RegionPieces> > regionPieces;
		int playerNumber;
		std::map<int,int> pipToTimesRolledMap;
		static int amountOfPlayers = 0;

		/*typedef std::map<RegionsOfMaps,RegionPieces> RegionsOfMaps_To_RegionPieces;
		typedef std::map<RegionsOfMaps,Races> RegionsOfMaps_To_Races;
		typedef std::map<Races,int> Races_To_RaceMultiplicity;
		typedef std::map<RegionPieces,int> RegionPieces_To_RegionPieceMultiplicity;*/

	public:
		/*Player::Player();*/
		Player(int multiplicityOfRaceTokensNotOnBoard, Graph* subgraph, std::string name, int numberOfCoins, std::vector<RegionsOfMaps> conqueredRegions,std::vector<Races> racesInConqueredRegions, std::vector<int> racesMultiplicity, std::vector<PowerBadges> powerBadges, std::vector< std::vector<RegionPieces> > regionPieces, int playerNumber, std::map<int,int> pipToTimesRolledMap);
		virtual ~Player();
		void setName(std::string name);
		std::string getName();
		void setSubgraph(Graph* subgraph);
		bool isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer);
		bool isConquered(RegionsOfMaps r);
		int getMultiplicityOfRaceTokensInGivenRegion(RegionsOfMaps r);
		int roll(void);
		/*static std::vector<Player> generatePlayers();*/
};

#endif /* PLAYER_HPP_ */
