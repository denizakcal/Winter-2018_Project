#ifndef USERINTERFACE_CPP_
#define USERINTERFACE_CPP_

#include "UserInterface.hpp"
#include <fstream>
#include <cstdlib>
#include "RegionsOfMaps.hpp"
#include "RegionsOfMapsHelper.hpp"
#include "PowerBadgesHelper.hpp"
#include "RegionPieces.hpp"
#include "RegionPiecesHelper.hpp"
#include "RacesHelper.hpp"
#include <vector>
#include "TheGame.hpp"
#include "Player.hpp"

using namespace std;

UserInterface::UserInterface() {
	// TODO Auto-generated constructor stub
}

TheGame UserInterface::loadGame(std::string fileName) {

	struct AllDataOfOnePerson {

		std::string playerName;
		int numberOfCoins;
		int multiplicityOfRaceTokensNotOnBoard;
		int numberOfRegionsOccupied; // This variable is only to help parse the data; Player objects don't need this, since they can figure it out via regions.size() or wtv.
		std::vector<RegionsOfMaps> conqueredRegions;
		std::vector<Races> racesInConqueredRegions;
		std::vector<int> racesMultiplicity;
		std::vector<PowerBadges> powerBadges;
		std::vector<RegionPieces> regionPieces;
		int playerNumber;
	};

	ifstream theFile("some_file.txt");
	int nthTokenSet = 1;

	int ithPerson = 0;
	int numberOfPlayers = 5; // This temporarily sets it to the highest it could be, and the correct value is parsed later (in the run before the person-data parsing).
	std::string currentParsedValue;
	bool beforePersonDataParsing = true;


	AllDataOfOnePerson* allDataOfOnePerson;

	while( ithPerson < numberOfPlayers ) {

		while( getline(theFile, currentParsedValue, ',') ) {

			if(beforePersonDataParsing) {

				numberOfPlayers = std::stoi(currentParsedValue);
				allDataOfOnePerson = new AllDataOfOnePerson[numberOfPlayers];
				beforePersonDataParsing = false;
				continue;
			}

			switch(nthTokenSet) {

				case 1: { // An std::string is supposed to be parsed.

					allDataOfOnePerson[ithPerson].playerName = currentParsedValue;

					break;
				}
				case 2: {

					std::string str = currentParsedValue;
					allDataOfOnePerson[ithPerson].numberOfCoins = std::stoi(str);
					break;
				}

				case 3: {

					std::string str = currentParsedValue;
					allDataOfOnePerson[ithPerson].multiplicityOfRaceTokensNotOnBoard = std::stoi(str);
					break;
				}

				case 4: {

					std::string str = currentParsedValue;
					allDataOfOnePerson[ithPerson].numberOfRegionsOccupied = std::stoi(str);
					break;
				}
				case 5: {

					allDataOfOnePerson[ithPerson].conqueredRegions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].conqueredRegions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 6: {

					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {

						Races temp = racesStringToEnum(currentParsedValue);
						allDataOfOnePerson[ithPerson].racesInConqueredRegions.push_back( temp );
					}

					int numberOfRaces = allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; // the # of races is the same amount as the # of regions occupied because each region has only 1 race // number of races != number of race tokens
					for(int i = 1; i < numberOfRaces; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].racesInConqueredRegions.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 7: {

					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {
						std::string str = currentParsedValue;
						allDataOfOnePerson[ithPerson].racesMultiplicity.push_back( std::stoi(str) );
					}

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].racesInConqueredRegions.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 8: {

					int numberOfPowerBadges = allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; // the # of power badges is the same amount as the # of regions occupied because each region has only 1 race, and each race is chosen with its accompanying PowerBadge.

					if(numberOfPowerBadges >= 1) {
						allDataOfOnePerson[ithPerson].powerBadges.push_back( powerBadgesStringToEnum(currentParsedValue) );
					}

					for(int i = 1; i < numberOfPowerBadges; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].racesInConqueredRegions.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 9: {

					// For 9th token set:
					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {
						allDataOfOnePerson[ithPerson].regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
					}

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
					}

					// For end stuff:
					allDataOfOnePerson[ithPerson].playerNumber = ithPerson+1;

					nthTokenSet = 0;
					ithPerson++;

					break;
				}

				default: {

					std::cout << "default case of switch statement of loadGame(wtv) ran" << std::endl;
					break;
				}
			}

			nthTokenSet++;
		}
	}

	std::vector<Player> players;

	for(int i = 0; i < numberOfPlayers; i++) {

		Graph g = Graph(numberOfPlayers);
		Graph* gPtr = &g;

		std::string playerName = allDataOfOnePerson[i].playerName;
		int numberOfCoins = allDataOfOnePerson[i].numberOfCoins;
		int multiplicityOfRaceTokensNotOnBoard = allDataOfOnePerson[i].multiplicityOfRaceTokensNotOnBoard;
		std::vector<RegionsOfMaps> conqueredRegions = allDataOfOnePerson[i].conqueredRegions;
		std::vector<Races> racesInConqueredRegions = allDataOfOnePerson[i].racesInConqueredRegions;
		std::vector<int> racesMultiplicity = allDataOfOnePerson[i].racesMultiplicity;
		std::vector<PowerBadges> powerBadges = allDataOfOnePerson[i].powerBadges;
		std::vector<RegionPieces> regionPieces = allDataOfOnePerson[i].regionPieces;
		int playerNumber = allDataOfOnePerson[i].playerNumber;

		Player p(multiplicityOfRaceTokensNotOnBoard,gPtr,playerName,numberOfCoins, conqueredRegions, racesInConqueredRegions, racesMultiplicity, powerBadges, regionPieces, playerNumber);

		players.push_back(p);
	}

	return TheGame(players);
}

void UserInterface::saveGame(TheGame theGame) {


}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}

#endif /* USERINTERFACE_CPP_ */
