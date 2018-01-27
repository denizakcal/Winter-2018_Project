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
    regionsArray[0] = Regions::REGION_TWO;
    regionsArray[1] = Regions::REGION_THREE;

    std::vector<Regions> regionsVector;
    regionsVector.push_back(Regions::REGION_TWO);
    regionsVector.push_back(Regions::REGION_THREE);

    g[Regions::REGION_ONE] = regionsVector;

    if( g[Regions::REGION_ONE].at(0) == Regions::REGION_ONE) {

        std::cout << "First region";
    }
    else if( g[Regions::REGION_ONE].at(0) == Regions::REGION_TWO) {

        std::cout << "Second region";
    }

    return 0;
}
