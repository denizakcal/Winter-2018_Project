#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>

#include "GameMap.hpp"
#include "RegionsOfMaps.h"


using namespace boost;
using namespace std;

int main(void) {

	GameMap m;

	m.buildMap();

	std::cout << "Testing 123" << std::endl;
	/*system("pause");*/
	return -1;
}
