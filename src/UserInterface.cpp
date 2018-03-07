
#include "UserInterface.hpp"
#include <fstream>
#include <cstdlib>
#include "RegionsOfMaps.hpp"
#include "RegionsOfMapsHelper.hpp"
#include "PowerBadgesHelper.hpp"
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
		int numberOfTokens;
		int numberOfRegionsOccupied;
		std::vector<RegionsOfMaps> regions;
		std::vector<Races> races;
		std::vector<int> racesMultiplicity;
		std::vector<PowerBadges> powerBadges;
		std::vector<RegionPieces> regionPieces;
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
					allDataOfOnePerson[ithPerson].numberOfTokens = std::stoi(str);
					break;
				}
				case 3: {

					std::string str = currentParsedValue;
					allDataOfOnePerson[ithPerson].numberOfRegionsOccupied = std::stoi(str);
					break;
				}
				case 4: {

					allDataOfOnePerson[ithPerson].regions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].regions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 5: {

					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {

						Races temp = racesStringToEnum(currentParsedValue);
						allDataOfOnePerson[ithPerson].races.push_back( temp );
					}

					int numberOfRaces = allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; // the # of races is the same amount as the # of regions occupied because each region has only 1 race // number of races != number of race tokens
					for(int i = 1; i < numberOfRaces; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].races.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 6: {

					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {
						std::string str = currentParsedValue;
						allDataOfOnePerson[ithPerson].racesMultiplicity.push_back( std::stoi(str) );
					}

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].races.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 7: {

					int numberOfPowerBadges = allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; // the # of power badges is the same amount as the # of regions occupied because each region has only 1 race, and each race is chosen with its accompanying PowerBadge.

					if(numberOfPowerBadges >= 1) {
						allDataOfOnePerson[ithPerson].powerBadges.push_back( powerBadgesStringToEnum(currentParsedValue) );
					}

					for(int i = 1; i < numberOfPowerBadges; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].races.push_back( racesStringToEnum(currentParsedValue) );
					}

					break;
				}
				case 8: {

					if(allDataOfOnePerson[ithPerson].numberOfRegionsOccupied >= 1) {
						allDataOfOnePerson[ithPerson].regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
					}

					for(int i = 1; i < allDataOfOnePerson[ithPerson].numberOfRegionsOccupied; i++) {

						getline(theFile, currentParsedValue, ',');
						allDataOfOnePerson[ithPerson].regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
					}

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
		Player p;
		p.setGraph(gPtr);
		players.push_back(p);
	}

	return TheGame(players);
}

void UserInterface::saveGame(TheGame theGame) {


}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}
