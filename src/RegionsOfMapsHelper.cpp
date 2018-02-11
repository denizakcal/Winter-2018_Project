#include "RegionsOfMapsHelper.h"
#include "RegionsOfMaps.h"

RegionsOfMapsHelper::RegionsOfMapsHelper()
{
    //ctor
}

static bool isMountain(RegionsOfMaps regionsOfMaps) {

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
    }
}

static bool isHill(RegionsOfMaps regionsOfMaps) {

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
    }
}
