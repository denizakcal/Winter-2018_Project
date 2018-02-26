#include "RegionsOfMapsHelper.hpp"

#include "RegionsOfMaps.hpp"

#include <string>

using namespace std;

bool isMountain(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        default: {
            return false;
        }
    }
}

bool isHill(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        default: {
            return false;
        }
    }
}

bool isSea(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return true;
        }
        default: {
            return false;
        }
    }
}

bool isSwamp(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        default: {
            return false;
        }
    }
}

bool isForest(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        default: {
            return false;
        }
    }
}

bool isSameMap(RegionsOfMaps regionsOfMaps) {
	return true; // temporary code
}

std::string regionsOfMapsEnumToString(RegionsOfMaps regionsOfMaps) {

    switch(regionsOfMaps) {

        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE: {
            return "TWO_PLAYER_MAP__MOUNTAIN_ONE";
        }
        /*case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return true;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE: {
            return true;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
            return false;
        }
        case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
            return false;
        }*/
        default: {
            return "ENUM-TO-STRING_CONVERSION_FAILURE";
        }
    }
}

RegionsOfMaps regionsOfMapsStringToEnum(std::string regionString) {

    if(regionString == "TWO_PLAYER_MAP__MOUNTAIN_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_ONE;
	}
    else if( regionString == "TWO_PLAYER_MAP__MOUNTAIN_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO") {
		return RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_TWO;
	}
    else if(regionString == "TWO_PLAYER_MAP__MOUNTAIN_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE" ) {
		return RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_THREE;
	}
    else if(regionString == "TWO_PLAYER_MAP__MOUNTAIN_FOUR" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR") {
    	return RegionsOfMaps::TWO_PLAYER_MAP__MOUNTAIN_FOUR;
    }
    else if(regionString == "TWO_PLAYER_MAP__FARMLAND_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE") {
    	return RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_ONE;
    }
    else if(regionString == "TWO_PLAYER_MAP__FARMLAND_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO") {
    	return RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_TWO;
    }
	else if(regionString == "TWO_PLAYER_MAP__FARMLAND_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_THREE;
	}
	else if(regionString == "TWO_PLAYER_MAP__FARMLAND_FOUR" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FARMLAND_FOUR;
	}
	else if(regionString == "TWO_PLAYER_MAP__SWAMP_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_ONE;
	}
	else if(regionString == "TWO_PLAYER_MAP__SWAMP_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_TWO;
	}
	else if(regionString == "TWO_PLAYER_MAP__SWAMP_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_THREE;
	}
	else if(regionString == "TWO_PLAYER_MAP__SWAMP_FOUR" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SWAMP_FOUR;
	}
	else if(regionString == "TWO_PLAYER_MAP__HILL_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__HILL_ONE;
	}
	else if(regionString == "TWO_PLAYER_MAP__HILL_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO") {
		return RegionsOfMaps::TWO_PLAYER_MAP__HILL_TWO;
	}
	else if(regionString == "TWO_PLAYER_MAP__HILL_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__HILL_THREE;
	}
	else if(regionString == "TWO_PLAYER_MAP__HILL_FOUR" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR") {
		return RegionsOfMaps::TWO_PLAYER_MAP__HILL_FOUR;
	}
	else if(regionString == "TWO_PLAYER_MAP__FOREST_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FOREST_ONE;
	}
	else if(regionString == "TWO_PLAYER_MAP__FOREST_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FOREST_TWO;
	}
	else if(regionString == "TWO_PLAYER_MAP__FOREST_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FOREST_THREE;
	}
	else if(regionString == "TWO_PLAYER_MAP__FOREST_FOUR" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR") {
		return RegionsOfMaps::TWO_PLAYER_MAP__FOREST_FOUR;
	}
	else if(regionString == "TWO_PLAYER_MAP__SEA_ONE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SEA_ONE;
	}
	else if(regionString == "TWO_PLAYER_MAP__SEA_TWO" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SEA_TWO;
	}
	else if(regionString == "TWO_PLAYER_MAP__SEA_THREE" || regionString == "RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE") {
		return RegionsOfMaps::TWO_PLAYER_MAP__SEA_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_FOUR" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FOUR;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_FIVE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_FIVE;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_SIX" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SIX;
	}
	else if(regionString == "THREE_PLAYER_MAP__MOUNTAIN_SEVEN" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN") {
		return RegionsOfMaps::THREE_PLAYER_MAP__MOUNTAIN_SEVEN;
	}
	else if(regionString == "THREE_PLAYER_MAP__FARMLAND_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__FARMLAND_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__FARMLAND_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__FARMLAND_FOUR" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FOUR;
	}
	else if(regionString == "THREE_PLAYER_MAP__FARMLAND_FIVE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FARMLAND_FIVE;
	}
	else if(regionString == "THREE_PLAYER_MAP__SWAMP_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__SWAMP_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__SWAMP_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__SWAMP_FOUR" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FOUR;
	}
	else if(regionString == "THREE_PLAYER_MAP__SWAMP_FIVE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SWAMP_FIVE;
	}
	else if(regionString == "THREE_PLAYER_MAP__HILL_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__HILL_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__HILL_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__HILL_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__HILL_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__HILL_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__HILL_FOUR" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR") {
		return RegionsOfMaps::THREE_PLAYER_MAP__HILL_FOUR;
	}
	else if(regionString == "THREE_PLAYER_MAP__HILL_FIVE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__HILL_FIVE;
	}
	else if(regionString == "THREE_PLAYER_MAP__FOREST_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FOREST_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__FOREST_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FOREST_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__FOREST_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FOREST_THREE;
	}
	else if(regionString == "THREE_PLAYER_MAP__FOREST_FOUR" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FOUR;
	}
	else if(regionString == "THREE_PLAYER_MAP__FOREST_FIVE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__FOREST_FIVE;
	}
	else if(regionString == "THREE_PLAYER_MAP__SEA_ONE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SEA_ONE;
	}
	else if(regionString == "THREE_PLAYER_MAP__SEA_TWO" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SEA_TWO;
	}
	else if(regionString == "THREE_PLAYER_MAP__SEA_THREE" || regionString == "RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE") {
		return RegionsOfMaps::THREE_PLAYER_MAP__SEA_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_FOUR" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FOUR;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_FIVE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_FIVE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_SIX" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SIX;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUNTAIN_SEVEN" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUNTAIN_SEVEN;
	}
	else if(regionString == "FOUR_PLAYER_MAP__MOUTAIN_EIGHT" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__MOUTAIN_EIGHT;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_FOUR" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FOUR;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_FIVE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_FIVE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_SIX" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SIX;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FARMLAND_SEVEN" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FARMLAND_SEVEN;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_FOUR" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FOUR;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_FIVE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_FIVE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_SIX" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SIX;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SWAMP_SEVEN" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SWAMP_SEVEN;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_FOUR" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FOUR;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_FIVE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_FIVE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_SIX" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SIX;
	}
	else if(regionString == "FOUR_PLAYER_MAP__HILL_SEVEN" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__HILL_SEVEN;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_THREE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_FOUR" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FOUR;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_FIVE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_FIVE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_SIX" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SIX;
	}
	else if(regionString == "FOUR_PLAYER_MAP__FOREST_SEVEN" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__FOREST_SEVEN;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SEA_ONE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SEA_ONE;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SEA_TWO" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SEA_TWO;
	}
	else if(regionString == "FOUR_PLAYER_MAP__SEA_THREE" || regionString == "RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE") {
		return RegionsOfMaps::FOUR_PLAYER_MAP__SEA_THREE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_ONE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_ONE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_TWO" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_TWO;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_THREE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_THREE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_FOUR" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FOUR;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_FIVE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_FIVE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_SIX" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SIX;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_SEVEN" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_SEVEN;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_EIGHT" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_EIGHT;
	}
	else if(regionString == "FIVE_PLAYER_MAP__MOUNTAIN_NINE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__MOUNTAIN_NINE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_ONE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_ONE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_TWO" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_TWO;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_THREE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_THREE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_FOUR" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FOUR;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_FIVE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_FIVE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_SIX" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SIX;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_SEVEN" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_SEVEN;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_EIGHT" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_EIGHT;
	}
	else if(regionString == "FIVE_PLAYER_MAP__FARMLAND_NINE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__FARMLAND_NINE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__SWAMP_ONE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_ONE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__SWAMP_TWO" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_TWO;
	}
	else if(regionString == "FIVE_PLAYER_MAP__SWAMP_THREE" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_THREE;
	}
	else if(regionString == "FIVE_PLAYER_MAP__SWAMP_FOUR" || regionString == "RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR") {
		return RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FOUR;
	}
	/*case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_FIVE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SIX: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_SEVEN: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_EIGHT: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SWAMP_NINE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_ONE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_TWO: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_THREE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FOUR: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_FIVE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SIX: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_SEVEN: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_EIGHT: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__HILL_NINE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_ONE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_TWO: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_THREE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FOUR: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_FIVE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SIX: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_SEVEN: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_EIGHT: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__FOREST_NINE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_ONE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_TWO: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	case RegionsOfMaps::FIVE_PLAYER_MAP__SEA_THREE: {
		return false;
	}
	else if(regionString == "XYZ1" || regionString == "XYZ2") {
		return XYZ;
	}
	*/

		return RegionsOfMaps::NO_REGION;
	}
}
