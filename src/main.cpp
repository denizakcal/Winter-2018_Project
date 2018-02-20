#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>

#include "GameMap.hpp"
#include "RegionsOfMaps.hpp"

#include "UserInterface.hpp"

using namespace boost;
using namespace std;

int main(void) {

	UserInterface ui;
	std::string fileName("some_file.txt");
	ui.loadMap(fileName);

	GameMap *m = new GameMap(3);

	m->buildMap();

	std::cout << "Testing 123" << std::endl;
	/*system("pause");*/
	return -1;
}
