#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>

#include "RegionsOfMaps.h"

using namespace boost;
using namespace std;

class TwoPlayerMap {

	struct VertexData
	{
		RegionsOfMaps region_name; //?
	};

	struct EdgeData
	{
		std::string edge_name;
		double dist; //not sure if we need this yet
	};

	RegionsOfMaps region;

	public:
	void buildMap() {

		//create typedef for Graph type
		typedef boost::adjacency_list
			<boost::vecS,
			boost::vecS,
			boost::undirectedS,
			VertexData, EdgeData
			>GraphType;

		//typedef labels
		typedef boost::graph_traits<GraphType>::vertex_descriptor Vertex;
		typedef boost::graph_traits<GraphType>::edge_descriptor Edge;

		//instanciate graph type
		GraphType g;

		/*// Property accessors
		property_map<GraphType, vertex_name_t>::type region = get(vertex_name, g);*/

		// Create the vertices
		Vertex v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
			v11, v12, v13, v14, v15, v16, v17, v18, v19,
			v20, v21, v22, v23;

		v1 = boost::add_vertex(g);
		v2 = boost::add_vertex(g);
		v3 = boost::add_vertex(g);
		v4 = boost::add_vertex(g);
		v5 = boost::add_vertex(g);
		v6 = boost::add_vertex(g);
		v7 = boost::add_vertex(g);
		v8 = boost::add_vertex(g);
		v9 = boost::add_vertex(g);
		v10 = boost::add_vertex(g);
		v11 = boost::add_vertex(g);
		v12 = boost::add_vertex(g);
		v13 = boost::add_vertex(g);
		v14 = boost::add_vertex(g);
		v15 = boost::add_vertex(g);
		v16 = boost::add_vertex(g);
		v17 = boost::add_vertex(g);
		v18 = boost::add_vertex(g);
		v19 = boost::add_vertex(g);
		v20 = boost::add_vertex(g);
		v21 = boost::add_vertex(g);
		v22 = boost::add_vertex(g);
		v23 = boost::add_vertex(g);

		//set the propreties of the vertices
		g[v1].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE;
		g[v2].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE;
		g[v3].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE;
		g[v4].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE;
		g[v5].region_name = RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE;

		g[v6].region_name = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
		g[v7].region_name = RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO;
		g[v8].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO;
		g[v9].region_name = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO;
		g[v10].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO;
		g[v11].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO;

		g[v12].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE;
		g[v13].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE;
		g[v14].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR;
		g[v15].region_name = RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE;
		g[v16].region_name = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE;

		g[v17].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO;
		g[v18].region_name = RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR;
		g[v19].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE;
		g[v20].region_name = RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR;
		g[v21].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR;
		g[v22].region_name = RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR;
		g[v23].region_name = RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE;


		//create edges between vertcies
		Edge e1, e2, e3, e4, e5, e6, e7, e8, e9, e10,
			e11, e12, e13, e14, e15, e16, e17, e18, e19,
			e20, e21, e22, e23, e24, e25, e26, e27, e28,
			e29, e30, e31, e32, e33, e34, e35, e36, e37,
			e38, e39, e40, e41, e42, e43, e44, e45, e46,
			e47, e48, e49, e50, e51;

		bool added;

		//v1 = SEA_ONE
		boost::tie(e1, added) = boost::add_edge(v1, v2, g);
		boost::tie(e2, added) = boost::add_edge(v1, v6, g);

		//v2 = FARMLAND_ONE
		boost::tie(e3, added) = boost::add_edge(v2, v6, g);
		boost::tie(e4, added) = boost::add_edge(v2, v7, g);
		boost::tie(e5, added) = boost::add_edge(v2, v3, g);

		//v3 = FOREST_ONE
		boost::tie(e6, added) = boost::add_edge(v3, v7, g);
		boost::tie(e7, added) = boost::add_edge(v3, v8, g);
		boost::tie(e8, added) = boost::add_edge(v3, v9, g);
		boost::tie(e9, added) = boost::add_edge(v3, v4, g);

		//v4 = SWAMP_ONE
		boost::tie(e10, added) = boost::add_edge(v4, v9, g);
		boost::tie(e11, added) = boost::add_edge(v4, v10, g);
		boost::tie(e12, added) = boost::add_edge(v4, v5, g);

		//v5 = HILL_ONE
		boost::tie(e13, added) = boost::add_edge(v5, v10, g);
		boost::tie(e14, added) = boost::add_edge(v5, v11, g);

		//v6 = MOUNTAIN_ONE
		boost::tie(e15, added) = boost::add_edge(v6, v12, g);
		boost::tie(e16, added) = boost::add_edge(v6, v7, g);

		//v7 = HILL_TWO
		boost::tie(e17, added) = boost::add_edge(v7, v12, g);
		boost::tie(e18, added) = boost::add_edge(v7, v13, g);
		boost::tie(e19, added) = boost::add_edge(v7, v8, g);

		//v8 = SEA_TWO
		boost::tie(e20, added) = boost::add_edge(v8, v13, g);
		boost::tie(e21, added) = boost::add_edge(v8, v14, g);
		boost::tie(e22, added) = boost::add_edge(v8, v9, g);

		//v9 = MOUNTAIN_TWO
		boost::tie(e23, added) = boost::add_edge(v9, v14, g);
		boost::tie(e24, added) = boost::add_edge(v9, v15, g);
		boost::tie(e25, added) = boost::add_edge(v9, v10, g);

		//v10 = FARMLAND_TWO
		boost::tie(e26, added) = boost::add_edge(v10, v15, g);
		boost::tie(e27, added) = boost::add_edge(v10, v11, g);

		//v11 = FOREST_TWO
		boost::tie(e28, added) = boost::add_edge(v11, v15, g);
		boost::tie(e29, added) = boost::add_edge(v11, v16, g);

		//v12 = FARMLAND_THREE
		boost::tie(e30, added) = boost::add_edge(v12, v17, g);
		boost::tie(e31, added) = boost::add_edge(v12, v18, g);
		boost::tie(e32, added) = boost::add_edge(v12, v13, g);

		//v13 = FOREST_THREE
		boost::tie(e33, added) = boost::add_edge(v13, v18, g);
		boost::tie(e34, added) = boost::add_edge(v13, v19, g);
		boost::tie(e35, added) = boost::add_edge(v13, v14, g);

		//v14 = FARMLAND_FOUR
		boost::tie(e36, added) = boost::add_edge(v14, v19, g);
		boost::tie(e37, added) = boost::add_edge(v14, v20, g);
		boost::tie(e38, added) = boost::add_edge(v14, v21, g);
		boost::tie(e39, added) = boost::add_edge(v14, v15, g);

		//v15 = HILL_THREE
		boost::tie(e40, added) = boost::add_edge(v15, v21, g);
		boost::tie(e41, added) = boost::add_edge(v15, v22, g);
		boost::tie(e42, added) = boost::add_edge(v15, v16, g);

		//v16 = MOUNTAIN_THREE
		boost::tie(e43, added) = boost::add_edge(v16, v22, g);
		boost::tie(e44, added) = boost::add_edge(v16, v23, g);

		//v17 = SWAMP_TWO
		boost::tie(e45, added) = boost::add_edge(v17, v18, g);

		//v18 = HILL_FOUR
		boost::tie(e46, added) = boost::add_edge(v18, v19, g);

		//v19 = SWAMP_THREE
		boost::tie(e47, added) = boost::add_edge(v19, v20, g);

		//v20 = MOUNTAIN_FOUR
		boost::tie(e48, added) = boost::add_edge(v20, v21, g);

		//v21 = SWAMP_FOUR
		boost::tie(e49, added) = boost::add_edge(v21, v23, g);
		boost::tie(e50, added) = boost::add_edge(v21, v22, g);

		//v22 = FOREST_FOUR
		boost::tie(e51, added) = boost::add_edge(v22, v23, g);


		//if we want we can add propreties to the edges
		//ex: g[e1].edge_name = "hi";

		//print connected graph
		std::vector<int> component(boost::num_vertices(g));
		/*size_t num_components = boost::connected_components(g, &component[0]);*/

		std::cout << "Vertices in the first component:" << std::endl;
		for (size_t i = 0; i < boost::num_vertices(g); ++i)
			if (component[i] == 0)
				std::cout << i << " ";

		return;
	}
};

int main(void) {

	TwoPlayerMap m;

	m.buildMap();

	std::cout << "Testing 123" << std::endl;
	/*system("pause");*/
	return -1;
}
