
#include "UserInterface.hpp"
#include <fstream>
#include <cstdlib>
#include "RegionsOfMaps.hpp"
#include "RegionsOfMapsHelper.hpp"
#include "PowerBadgesHelper.hpp"
#include "RegionPiecesHelper.hpp"
#include "RacesHelper.hpp"
#include <vector>
#include "Graph.hpp"

using namespace std;

UserInterface::UserInterface() {
	// TODO Auto-generated constructor stub
}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}

Graph UserInterface::loadMap(std::string fileName) {

	/*ifstream fileScanner;
	std::getline(std::cin, fileName);
	fileScanner.open(fileName);

	if( !fileScanner.is_open() ) {

		std::cout << "Bad!" << std::endl;
//		exit(EXIT_FAILURE);
	}

	char word[50];
	fileScanner >> word;

	while( fileScanner.good() ) { // good = hasNext

		std::cout << word << " ";
		fileScanner >> word;
	}*/

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

	std::string currentParsedValue;

	AllDataOfOnePerson allDataOfOnePerson;

	while( getline(theFile, currentParsedValue, ',') ) {

		switch(nthTokenSet) {

			case 1: { // An std::string is supposed to be parsed.

				allDataOfOnePerson.playerName = currentParsedValue;
				break;
			}
			case 2: {

				std::string str = currentParsedValue;
				allDataOfOnePerson.numberOfTokens = std::stoi(str);
				break;
			}
			case 3: {

				std::string str = currentParsedValue;
				allDataOfOnePerson.numberOfRegionsOccupied = std::stoi(str);
				break;
			}
			case 4: {

				allDataOfOnePerson.regions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );

				for(int i = 1; i < allDataOfOnePerson.numberOfRegionsOccupied; i++) {

					getline(theFile, currentParsedValue, ',');
//					nthTokenSet++;
					allDataOfOnePerson.regions.push_back( regionsOfMapsStringToEnum(currentParsedValue) );
				}

				break;
			}
			case 5: {

				if(allDataOfOnePerson.numberOfRegionsOccupied >= 1) {

					Races temp = racesStringToEnum(currentParsedValue);
					allDataOfOnePerson.races.push_back( temp );
				}

				int numberOfRaces = allDataOfOnePerson.numberOfRegionsOccupied; // the # of races is the same amount as the # of regions occupied because each region has only 1 race // number of races != number of race tokens
				for(int i = 1; i < numberOfRaces; i++) {

					getline(theFile, currentParsedValue, ',');
//					nthTokenSet++;
					allDataOfOnePerson.races.push_back( racesStringToEnum(currentParsedValue) );
				}

				break;
			}
			case 6: {

				if(allDataOfOnePerson.numberOfRegionsOccupied >= 1) {
					std::string str = currentParsedValue;
					allDataOfOnePerson.racesMultiplicity.push_back( std::stoi(str) );
				}

				for(int i = 1; i < allDataOfOnePerson.numberOfRegionsOccupied; i++) {

					getline(theFile, currentParsedValue, ',');
//					nthTokenSet++;
					allDataOfOnePerson.races.push_back( racesStringToEnum(currentParsedValue) );
				}

				break;
			}
			case 7: {

				int numberOfPowerBadges = allDataOfOnePerson.numberOfRegionsOccupied; // the # of power badges is the same amount as the # of regions occupied because each region has only 1 race, and each race is chosen with its accompanying PowerBadge.

				if(numberOfPowerBadges >= 1) {
					allDataOfOnePerson.powerBadges.push_back( powerBadgesStringToEnum(currentParsedValue) );
				}

				for(int i = 1; i < numberOfPowerBadges; i++) {

					getline(theFile, currentParsedValue, ',');
//					nthTokenSet++;
					allDataOfOnePerson.races.push_back( racesStringToEnum(currentParsedValue) );
				}

				break;
			}
			case 8: {

				if(allDataOfOnePerson.numberOfRegionsOccupied >= 1) {
					allDataOfOnePerson.regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
				}

				for(int i = 1; i < allDataOfOnePerson.numberOfRegionsOccupied; i++) {

					getline(theFile, currentParsedValue, ',');
//					nthTokenSet++;
					allDataOfOnePerson.regionPieces.push_back( regionPiecesStringToEnum(currentParsedValue) );
				}

				break;
			}
			default: {

				std::cout << "default case of switch statement ran" << std::endl;
				break;
			}
		}
//		std::cout << currentParsedValue << std::endl;
		nthTokenSet++;
	}

	/*// The following eight lines are just for testing purposes (and will be removed later).
	std::cout << allDataOfOnePerson.numberOfRegionsOccupied << std::endl;
	std::cout << allDataOfOnePerson.numberOfTokens << std::endl;
	std::cout << allDataOfOnePerson.playerName << std::endl;
	std::cout << powerBadgesEnumToString(allDataOfOnePerson.powerBadges.at(0)) << std::endl;
	std::cout << racesEnumToString(allDataOfOnePerson.races.at(0)) << std::endl;
	std::cout << allDataOfOnePerson.racesMultiplicity.at(0) << std::endl;
	std::cout << regionPiecesEnumToString( allDataOfOnePerson.regionPieces.at(0) ) << std::endl;
	std::cout << regionsOfMapsEnumToString( allDataOfOnePerson.regions.at(0) ) << std::endl;*/

	Graph gameGraph(2);

	return gameGraph;

	/*std::string line_;
	ifstream file_("mytext.txt");
	if (file_.is_open()) {
		while (getline(file_, line_)) {
			std::out << line '\n';

		}
		file_.close();
	}
	else
		std::cout << "file is not open" << '\n';
	std::cin.get();
	return 0;*/
}

void UserInterface::saveMap(Graph gameMap) {


}
