#include <iostream>
#include <RacesPlusOwnershipPair.h>
#include <map>
#include <RegionsOfMaps.h>
#include <vector>
#include <ctime>

using namespace std;

typedef map<RegionsOfMaps,std::vector<RegionsOfMaps>> GraphOfRegions;
typedef map<RegionsOfMaps,std::vector<RacesPlusOwnershipPair>> LocationToRacesPlusOwnershipPairMap;

class TheGame {


    //std::vector<Races> containsRaces(MapOne_Regions region, Players ownedByPlayer) {
    std::vector<Races> racesPlusOwnershipPairContained(RegionsOfMaps region, RacesPlusOwnershipPair pair) {

        if(region == RegionsOfMaps::FIVE_PLAYER_MAP__REGION_ONE) {

            LocationToRacesPlusOwnershipPairMap locationToRacesPlusOwnershipPairMap;

            return locationToRacesPlusOwnershipPairMap[region];
        }
    }

    static int die_roll(void) {

        int r;
        srand(time(NULL));
        r = rand()%6+1;

        switch(r) {

            case 1: {} // Three sides of the die have the number 0.
            case 2: {} // Three sides of the die have the number 0.
            case 3: { // Three sides of the die have the number 0.
                return 0;
            }

            case 4: {
                return 1;
            }

            case 5: {
                return 2;
            }

            case 6: {
                return 3;
            }
        }
    }
};

int main()
{

    GraphOfRegions g;
    RegionsOfMaps regionsArray[2];
    regionsArray[0] = RegionsOfMaps::MOUNTAIN_TWO;
    regionsArray[1] = RegionsOfMaps::MOUNTAIN_THREE;

    std::vector<RegionsOfMaps> regionsVector;
    regionsVector.push_back(RegionsOfMaps::MOUNTAIN_TWO);
    regionsVector.push_back(RegionsOfMaps::MOUNTAIN_THREE);

    g[RegionsOfMaps::MOUNTAIN_ONE] = regionsVector;

    if( g[RegionsOfMaps::MOUNTAIN_ONE].at(0) == RegionsOfMaps::MOUNTAIN_ONE) {

        std::cout << "First region";
    }
    else if( g[RegionsOfMaps::MOUNTAIN_ONE].at(0) == RegionsOfMaps::MOUNTAIN_TWO) {

        std::cout << "Second region";
    }

    return 0;
}
