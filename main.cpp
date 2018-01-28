#include <iostream>
#include <Races.h>
#include <map>
#include <Regions.h>
#include <vector>

using namespace std;

typedef map<Regions,std::vector<Regions>> GraphOfRegions;

int main()
{

    GraphOfRegions g;
    Regions regionsArray[2];
    regionsArray[0] = Regions::MOUNTAIN_TWO;
    regionsArray[1] = Regions::MOUNTAIN_THREE;

    std::vector<Regions> regionsVector;
    regionsVector.push_back(Regions::MOUNTAIN_TWO);
    regionsVector.push_back(Regions::MOUNTAIN_THREE);

    g[Regions::MOUNTAIN_ONE] = regionsVector;

    if( g[Regions::MOUNTAIN_ONE].at(0) == Regions::MOUNTAIN_ONE) {

        std::cout << "First region";
    }
    else if( g[Regions::MOUNTAIN_ONE].at(0) == Regions::MOUNTAIN_TWO) {

        std::cout << "Second region";
    }

    return 0;
}
