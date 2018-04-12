
#include "GameBoard.hpp"

namespace GameBoard {

	namespace {
		std::map< RegionsOfMaps, std::vector<RegionsOfMaps> > masterAdjacencyList;
		std::map<RegionsOfMaps,std::vector<RegionsOfMaps>>::iterator theIterator;
	}

	void buildGameBoard(int numberOfPlayers) {

		int chooseGraph = numberOfPlayers;

		switch (chooseGraph) {

			// TWO PLAYERS --------------------------------------------------------------
			case 2: {

				// For TWO_PLAYER_MAP__MOUNTAIN_ONE + regions adjacent to it
				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
				std::vector<RegionsOfMaps> regionsAdjacentToCurrentRegion;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

	//				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
	//				std::vector<RegionsOfMaps>* regionsAdjacentToCurrentRegion = new std::vector<RegionsOfMaps>;
	//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
	//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
	//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
	//				regionsAdjacentToCurrentRegion->push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
	//				masterAdjacencyList.insert( std::make_pair(currentRegion,*regionsAdjacentToCurrentRegion) );
	//				delete regionsAdjacentToCurrentRegion;

	//				RegionsOfMaps currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
	//				std::vector< std::vector<RegionsOfMaps> > regionsAdjacentToCurrentRegion;
	//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
	//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
	//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
	//				regionsAdjacentToCurrentRegion.at(0).push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
	//				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion.at(0)) );

				// For TWO_PLAYER_MAP__MOUNTAIN_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__MOUNTAIN_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__MOUNTAIN_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FARMLAND_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FARMLAND_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FARMLAND_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FARMLAND_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SWAMP_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );

				// TWO_PLAYER_MAP__HILL_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__HILL_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();


				// TWO_PLAYER_MAP__FOREST_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__FOREST_FOUR + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_ONE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_TWO + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				// TWO_PLAYER_MAP__SEA_THREE + regions adjacent to it
				currentRegion = RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE;
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR);
				regionsAdjacentToCurrentRegion.push_back(RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE);
				masterAdjacencyList.insert( std::make_pair(currentRegion,regionsAdjacentToCurrentRegion) );
				regionsAdjacentToCurrentRegion.clear();

				break;
			}

			// THREE PLAYERS --------------------------------------------------------------
			case 3: {

				// code TODO
				break;
			}

			// FOUR PLAYERS --------------------------------------------------------------
			case 4: {

				// code TODO
				break;
			}



			// FIVE PLAYERS --------------------------------------------------------------
			case 5: {

				// code TODO
				break;
			}
		}

		theIterator = masterAdjacencyList.begin();
	}

	RegionsOfMaps nextRegion() {

		RegionsOfMaps r = theIterator->first;
		theIterator++;

		return r;
	}

	bool isAtBeginning() {

		return theIterator == masterAdjacencyList.begin();
	}

	bool isAtEnd() {

		return theIterator == masterAdjacencyList.end();
	}

	std::vector<RegionsOfMaps> getAdjacentRegions(RegionsOfMaps r) {

		return masterAdjacencyList.at(r);
	}
}
