#include "GameMap.hpp"

#include <iostream>                  // for std::cout
#include <utility>                   // for std::pair
#include <algorithm>                 // for std::for_each
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/connected_components.hpp>

#include "RegionsOfMaps.hpp"

using namespace boost;
using namespace std;

GameMap::~GameMap() {

	// code
}

void GameMap::buildMap() {

	struct VertexData
	{
		RegionsOfMaps region_name; //?
	};

	struct EdgeData
	{
		std::string edge_name;
		double dist; //not sure if we need this yet
	};

		//create typedef for graph type
		typedef boost::adjacency_list
			<boost::vecS,
			boost::vecS,
			boost::undirectedS,
			VertexData, EdgeData
			>graphtype;

		//typedef labels
		typedef boost::graph_traits<graphtype>::vertex_descriptor vertex;
		typedef boost::graph_traits<graphtype>::edge_descriptor edge;

		//instanciate graph type
		graphtype g;

		/*// property accessors
		property_map<graphtype, vertex_name_t>::type region = get(vertex_name, g);*/

		int chooseGraph = getNumberOfPlayers();

		switch (chooseGraph) {

      //TWO PLAYERS --------------------------------------------------------------
		case 2:{
			// create the vertices
			vertex v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
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


			//create edges between vertices
			edge e1, e2, e3, e4, e5, e6, e7, e8, e9, e10,
				e11, e12, e13, e14, e15, e16, e17, e18, e19,
				e20, e21, e22, e23, e24, e25, e26, e27, e28,
				e29, e30, e31, e32, e33, e34, e35, e36, e37,
				e38, e39, e40, e41, e42, e43, e44, e45, e46,
				e47, e48, e49, e50, e51;

			bool added;

			//v1 = sea_one
			boost::tie(e1, added) = boost::add_edge(v1, v2, g);
			boost::tie(e2, added) = boost::add_edge(v1, v6, g);

			//v2 = farmland_one
			boost::tie(e3, added) = boost::add_edge(v2, v6, g);
			boost::tie(e4, added) = boost::add_edge(v2, v7, g);
			boost::tie(e5, added) = boost::add_edge(v2, v3, g);

			//v3 = forest_one
			boost::tie(e6, added) = boost::add_edge(v3, v7, g);
			boost::tie(e7, added) = boost::add_edge(v3, v8, g);
			boost::tie(e8, added) = boost::add_edge(v3, v9, g);
			boost::tie(e9, added) = boost::add_edge(v3, v4, g);

			//v4 = swamp_one
			boost::tie(e10, added) = boost::add_edge(v4, v9, g);
			boost::tie(e11, added) = boost::add_edge(v4, v10, g);
			boost::tie(e12, added) = boost::add_edge(v4, v5, g);

			//v5 = hill_one
			boost::tie(e13, added) = boost::add_edge(v5, v10, g);
			boost::tie(e14, added) = boost::add_edge(v5, v11, g);

			//v6 = mountain_one
			boost::tie(e15, added) = boost::add_edge(v6, v12, g);
			boost::tie(e16, added) = boost::add_edge(v6, v7, g);

			//v7 = hill_two
			boost::tie(e17, added) = boost::add_edge(v7, v12, g);
			boost::tie(e18, added) = boost::add_edge(v7, v13, g);
			boost::tie(e19, added) = boost::add_edge(v7, v8, g);

			//v8 = sea_two
			boost::tie(e20, added) = boost::add_edge(v8, v13, g);
			boost::tie(e21, added) = boost::add_edge(v8, v14, g);
			boost::tie(e22, added) = boost::add_edge(v8, v9, g);

			//v9 = mountain_two
			boost::tie(e23, added) = boost::add_edge(v9, v14, g);
			boost::tie(e24, added) = boost::add_edge(v9, v15, g);
			boost::tie(e25, added) = boost::add_edge(v9, v10, g);

			//v10 = farmland_two
			boost::tie(e26, added) = boost::add_edge(v10, v15, g);
			boost::tie(e27, added) = boost::add_edge(v10, v11, g);

			//v11 = forest_two
			boost::tie(e28, added) = boost::add_edge(v11, v15, g);
			boost::tie(e29, added) = boost::add_edge(v11, v16, g);

			//v12 = farmland_three
			boost::tie(e30, added) = boost::add_edge(v12, v17, g);
			boost::tie(e31, added) = boost::add_edge(v12, v18, g);
			boost::tie(e32, added) = boost::add_edge(v12, v13, g);

			//v13 = forest_three
			boost::tie(e33, added) = boost::add_edge(v13, v18, g);
			boost::tie(e34, added) = boost::add_edge(v13, v19, g);
			boost::tie(e35, added) = boost::add_edge(v13, v14, g);

			//v14 = farmland_four
			boost::tie(e36, added) = boost::add_edge(v14, v19, g);
			boost::tie(e37, added) = boost::add_edge(v14, v20, g);
			boost::tie(e38, added) = boost::add_edge(v14, v21, g);
			boost::tie(e39, added) = boost::add_edge(v14, v15, g);

			//v15 = hill_three
			boost::tie(e40, added) = boost::add_edge(v15, v21, g);
			boost::tie(e41, added) = boost::add_edge(v15, v22, g);
			boost::tie(e42, added) = boost::add_edge(v15, v16, g);

			//v16 = mountain_three
			boost::tie(e43, added) = boost::add_edge(v16, v22, g);
			boost::tie(e44, added) = boost::add_edge(v16, v23, g);

			//v17 = swamp_two
			boost::tie(e45, added) = boost::add_edge(v17, v18, g);

			//v18 = hill_four
			boost::tie(e46, added) = boost::add_edge(v18, v19, g);

			//v19 = swamp_three
			boost::tie(e47, added) = boost::add_edge(v19, v20, g);

			//v20 = mountain_four
			boost::tie(e48, added) = boost::add_edge(v20, v21, g);

			//v21 = swamp_four
			boost::tie(e49, added) = boost::add_edge(v21, v23, g);
			boost::tie(e50, added) = boost::add_edge(v21, v22, g);

			//v22 = forest_four
			boost::tie(e51, added) = boost::add_edge(v22, v23, g);

			//if we want we can add propreties to the edges
			//ex: g[e1].edge_name = "hi";

			//print connected graph
			std::vector<int> component(boost::num_vertices(g));
			/*size_t num_components = boost::connected_components(g, &component[0]);*/

			std::cout << "vertices in the first component:" << std::endl;
			for (size_t i = 0; i < boost::num_vertices(g); ++i)
				if (component[i] == 0)
					std::cout << i << " ";

			break;
      }

			//THREE PLAYERS--------------------------------------------------
			case 3:{

				// create the vertices
				vertex v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
					v11, v12, v13, v14, v15, v16, v17, v18, v19,
					v20, v21, v22, v23, v24, v25, v26, v27, v28,
					v29, v30;

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
				v24 = boost::add_vertex(g);
				v25 = boost::add_vertex(g);
				v26 = boost::add_vertex(g);
				v27 = boost::add_vertex(g);
				v28 = boost::add_vertex(g);
				v29 = boost::add_vertex(g);
				v10 = boost::add_vertex(g);

				//set the propreties of the vertices
				g[v1].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE;
				g[v2].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE;
				g[v3].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE;
				g[v4].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE;
				g[v5].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE;
				g[v6].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO;

				g[v7].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO;
				g[v8].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO;
				g[v9].region_name = RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE;
				g[v10].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO;
				g[v11].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE;
				g[v12].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE;

				g[v13].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE;
				g[v14].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR;
				g[v15].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO;
				g[v16].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR;
				g[v17].region_name = RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO;
				g[v18].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE;

				g[v19].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR;
				g[v20].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE;
				g[v21].region_name = RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE;
				g[v22].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE;
				g[v23].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE;
				g[v24].region_name = RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR;

				g[v25].region_name = RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE;
				g[v26].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX;
				g[v27].region_name = RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN;
				g[v28].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR;
				g[v29].region_name = RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE;
				g[v30].region_name = RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE;


				//create edges between vertices
				edge e1, e2, e3, e4, e5, e6, e7, e8, e9, e10,
					e11, e12, e13, e14, e15, e16, e17, e18, e19,
					e20, e21, e22, e23, e24, e25, e26, e27, e28,
					e29, e30, e31, e32, e33, e34, e35, e36, e37,
					e38, e39, e40, e41, e42, e43, e44, e45, e46,
					e47, e48, e49, e50, e51, e52, e53, e54, e55,
					e56, e57, e58, e59, e60, e61, e62, e63, e64,
					e65, e66, e67, e68, e69, e70;

				bool added;

				//v1 = sea_one
				boost::tie(e1, added) = boost::add_edge(v1, v2, g);
				boost::tie(e2, added) = boost::add_edge(v1, v7, g);
				boost::tie(e3, added) = boost::add_edge(v1, v13, g);

				boost::tie(e4, added) = boost::add_edge(v2, v7, g);
				boost::tie(e5, added) = boost::add_edge(v2, v8, g);
				boost::tie(e6, added) = boost::add_edge(v2, v3, g);

				boost::tie(e7, added) = boost::add_edge(v3, v8, g);
				boost::tie(e8, added) = boost::add_edge(v3, v9, g);
				boost::tie(e9, added) = boost::add_edge(v3, v4, g);

				boost::tie(e10, added) = boost::add_edge(v4, v9, g);
				boost::tie(e11, added) = boost::add_edge(v4, v10, g);
				boost::tie(e12, added) = boost::add_edge(v4, v5, g);

				boost::tie(e13, added) = boost::add_edge(v5, v10, g);
				boost::tie(e14, added) = boost::add_edge(v5, v11, g);
				boost::tie(e14, added) = boost::add_edge(v5, v6, g);

				boost::tie(e15, added) = boost::add_edge(v6, v11, g);
				boost::tie(e16, added) = boost::add_edge(v6, v12, g);

				boost::tie(e17, added) = boost::add_edge(v7, v13, g);
				boost::tie(e18, added) = boost::add_edge(v7, v8, g);

				boost::tie(e19, added) = boost::add_edge(v8, v13, g);
				boost::tie(e20, added) = boost::add_edge(v8, v14, g);
				boost::tie(e21, added) = boost::add_edge(v8, v9, g);

				boost::tie(e22, added) = boost::add_edge(v9, v14, g);
				boost::tie(e23, added) = boost::add_edge(v9, v15, g);
				boost::tie(e24, added) = boost::add_edge(v9, v10, g);

				boost::tie(e25, added) = boost::add_edge(v10, v15, g);
				boost::tie(e26, added) = boost::add_edge(v10, v16, g);
				boost::tie(e27, added) = boost::add_edge(v10, v11, g);

				boost::tie(e28, added) = boost::add_edge(v11, v16, g);
				boost::tie(e29, added) = boost::add_edge(v11, v17, g);
				boost::tie(e30, added) = boost::add_edge(v11, v12, g);

				boost::tie(e31, added) = boost::add_edge(v12, v17, g);
				boost::tie(e32, added) = boost::add_edge(v12, v18, g);

				boost::tie(e33, added) = boost::add_edge(v13, v19, g);
				boost::tie(e34, added) = boost::add_edge(v13, v14, g);

				boost::tie(e35, added) = boost::add_edge(v14, v19, g);
				boost::tie(e36, added) = boost::add_edge(v14, v20, g);
				boost::tie(e37, added) = boost::add_edge(v14, v15, g);

				boost::tie(e38, added) = boost::add_edge(v15, v20, g);
				boost::tie(e39, added) = boost::add_edge(v15, v21, g);
				boost::tie(e40, added) = boost::add_edge(v15, v22, g);
				boost::tie(e41, added) = boost::add_edge(v15, v16, g);

				boost::tie(e42, added) = boost::add_edge(v16, v22, g);
				boost::tie(e43, added) = boost::add_edge(v16, v23, g);
				boost::tie(e44, added) = boost::add_edge(v16, v17, g);

				boost::tie(e45, added) = boost::add_edge(v17, v23, g);
				boost::tie(e46, added) = boost::add_edge(v17, v24, g);
				boost::tie(e47, added) = boost::add_edge(v17, v18, g);

				boost::tie(e48, added) = boost::add_edge(v18, v24, g);
				boost::tie(e49, added) = boost::add_edge(v18, v30, g);

				boost::tie(e50, added) = boost::add_edge(v19, v25, g);
				boost::tie(e51, added) = boost::add_edge(v19, v26, g);
				boost::tie(e52, added) = boost::add_edge(v19, v20, g);

				boost::tie(e53, added) = boost::add_edge(v20, v26, g);
				boost::tie(e54, added) = boost::add_edge(v20, v27, g);
				boost::tie(e55, added) = boost::add_edge(v20, v21, g);

				boost::tie(e56, added) = boost::add_edge(v21, v27, g);
				boost::tie(e57, added) = boost::add_edge(v21, v28, g);
				boost::tie(e58, added) = boost::add_edge(v21, v22, g);

				boost::tie(e59, added) = boost::add_edge(v22, v28, g);
				boost::tie(e60, added) = boost::add_edge(v22, v29, g);
				boost::tie(e61, added) = boost::add_edge(v22, v23, g);

				boost::tie(e62, added) = boost::add_edge(v23, v29, g);
				boost::tie(e63, added) = boost::add_edge(v23, v24, g);

				boost::tie(e64, added) = boost::add_edge(v24, v29, g);
				boost::tie(e65, added) = boost::add_edge(v24, v30, g);

				boost::tie(e66, added) = boost::add_edge(v25, v26, g);

				boost::tie(e67, added) = boost::add_edge(v26, v27, g);

				boost::tie(e68, added) = boost::add_edge(v27, v28, g);

				boost::tie(e69, added) = boost::add_edge(v28, v29, g);

				boost::tie(e70, added) = boost::add_edge(v29, v30, g);


				//if we want we can add propreties to the edges
				//ex: g[e1].edge_name = "hi";

				//print connected graph
				std::vector<int> component(boost::num_vertices(g));
				/*size_t num_components = boost::connected_components(g, &component[0]);*/

				std::cout << "vertices in the first component:" << std::endl;
				for (size_t i = 0; i < boost::num_vertices(g); ++i)
					if (component[i] == 0)
						std::cout << i << " ";
				break;
        }

				//FOUR PLAYERS-------------------------------------------------------
				case 4:
					break;
				//FIVE PLAYERS------------------------------------------------------
				case 5:
					break;
		}


}
