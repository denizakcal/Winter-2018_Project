
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include "Graph.hpp"
#include <vector>
#include "Races.hpp"
#include "PowerBadges.hpp"
#include "RegionPieces.hpp"

class Player {

	private:
		std::string name;
		Graph* subgraph = nullptr;
		int multiplicityOfRaceTokensNotOnBoard;
		int numberOfCoins;
		std::vector<RegionsOfMaps> conqueredRegions;
		std::vector<Races> racesInConqueredRegions;
		std::vector<int> racesMultiplicity;
		std::vector<PowerBadges> powerBadges;
		std::vector<RegionPieces> regionPieces;

	public:
		Player(int multiplicityOfRaceTokensNotOnBoard, Graph* subgraph, std::string name, int numberOfCoins, std::vector<RegionsOfMaps> conqueredRegions,std::vector<Races> racesInConqueredRegions, std::vector<int> racesMultiplicity, std::vector<PowerBadges> powerBadges, std::vector<RegionPieces> regionPieces);
		virtual ~Player();
		void setName(std::string name);
		std::string getName();
		void setSubgraph(Graph* subgraph);
		bool isAdjacentToConquered(RegionsOfMaps regionToPotentiallyConquer);
		bool isConquered(RegionsOfMaps r);
		int getMultiplicityOfRaceTokensInGivenRegion(RegionsOfMaps r);
};

#endif /* PLAYER_HPP_ */
