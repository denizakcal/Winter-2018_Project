#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
//#include <boost/graph/graph_traits.hpp>
//#include <boost/graph/adjacency_list.hpp>
//#include <boost/graph/connected_components.hpp>

#include "Graph.hpp"
#include "RegionsOfMaps.hpp"

#include "UserInterface.hpp"

using namespace boost;
using namespace std;

int main(void) {

	Graph gr(2);
	gr.buildMap();

	UserInterface ui;
	std::string fileName("some_file.txt");
	ui.loadGame(fileName);

	Graph *m = new Graph(3);

	m->buildMap();

	std::cout << "Testing 123" << std::endl;
	/*system("pause");*/
	return -1;
}
