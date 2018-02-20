
#include "UserInterface.hpp"
#include <fstream>
#include "GameMap.hpp"
#include <fstream>
#include <cstdlib>

using namespace std;

UserInterface::UserInterface() {
	// TODO Auto-generated constructor stub
}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}

GameMap UserInterface::loadMap(std::string fileName) {

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

		cout << word << " ";
		fileScanner >> word;
	}*/

	ifstream theFile("some_file.txt");

	std::string currentParsedValue;

	while( getline(theFile, currentParsedValue, ',') ) {

		std::cout << currentParsedValue << std::endl;
	}

	GameMap gameMap(2);

	return gameMap;

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

void UserInterface::saveMap(GameMap gameMap) {


}
