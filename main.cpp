#include <iostream>
#include <Races.h>
#include <map>
#include <MapOne_Regions.h>
#include <vector>
#include <ctime>

using namespace std;

typedef map<MapOne_Regions,std::vector<MapOne_Regions>> GraphOfRegions;
typedef map<MapOne_Regions,std::vector<Races>> LocationToRacesMap;

class TheGame {

    std::vector<Races> contains(MapOne_Regions region) {

        if(region == MapOne_Regions::MOUNTAIN_ONE) {

            LocationToRacesMap locationToRacesMap;

            return locationToRacesMap[region];
        }
    }

    int dieroll(void) {

        int r;
        srand(time(NULL));
        r = rand()%6+1;

        return r;
    }
};

int main()
{

    GraphOfRegions g;
    MapOne_Regions regionsArray[2];
    regionsArray[0] = MapOne_Regions::MOUNTAIN_TWO;
    regionsArray[1] = MapOne_Regions::MOUNTAIN_THREE;

    std::vector<MapOne_Regions> regionsVector;
    regionsVector.push_back(MapOne_Regions::MOUNTAIN_TWO);
    regionsVector.push_back(MapOne_Regions::MOUNTAIN_THREE);

    g[MapOne_Regions::MOUNTAIN_ONE] = regionsVector;

    if( g[MapOne_Regions::MOUNTAIN_ONE].at(0) == MapOne_Regions::MOUNTAIN_ONE) {

        std::cout << "First region";
    }
    else if( g[MapOne_Regions::MOUNTAIN_ONE].at(0) == MapOne_Regions::MOUNTAIN_TWO) {

        std::cout << "Second region";
    }

    return 0;
}
