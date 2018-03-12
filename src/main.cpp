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

	TextualUserInterface ui;
	TheGame theGame = ui.loadGame("some_file.txt");
	theGame.run();

	/*Graph gr(2);
	gr.buildMap();

	TextualUserInterface ui;
	std::string fileName("some_file.txt");
	ui.loadGame(fileName);

	Graph *m = new Graph(3);

	m->buildMap();

	std::cout << "Testing 123" << std::endl;*/
	/*system("pause");*/
	return 0;
}
