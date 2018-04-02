#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
//#include <boost/graph/graph_traits.hpp>
//#include <boost/graph/adjacency_list.hpp>
//#include <boost/graph/connected_components.hpp>

#include "Graph.hpp"
#include "RegionsOfMaps.hpp"
#include "TextualUserInterface.hpp"
#include "TheGame.hpp"

using namespace boost;
using namespace std;

int main(void) {

//	TextualUserInterface ui;
//	TheGame theGame = ui.loadGame("some_file.txt");
	std::vector<Player> players;
	Player playerOne;
	players.push_back(playerOne);
	Player playerTwo;
	players.push_back(playerOne);
	int turnOfPlayerN = 1;
	bool isPaused = false;
	TextualUserInterface tui(players, &isPaused, &turnOfPlayerN);
	TheGame theGame(players, &tui, 0);
	theGame.run();

	/*system("pause");*/
	return 0;
}
