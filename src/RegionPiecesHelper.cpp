#ifndef REGIONPIECESHELPER_CPP_
#define REGIONPIECESHELPER_CPP_

#include "RegionPieces.hpp"
#include "RegionPiecesHelper.hpp"
#include <string>

using namespace std;

std::string regionPiecesEnumToString(RegionPieces regionPiecesEnum) {

	switch(regionPiecesEnum) {

		case RegionPieces::TROLL_LAIR: {
			return "TROLL_LAIR";
		}
		case RegionPieces::FORTRESS: {
			return "FORTRESS";
		}
		case RegionPieces::MOUNTAIN: {
			return "MOUNTAIN";
		}
		case RegionPieces::ENCAMPMENT: {
			return "ENCAMPMENT";
		}
		case RegionPieces::HOLES_IN_GROUND: {
			return "HOLES_IN_GROUND";
		}
		case RegionPieces::HERO: {
			return "HERO";
		}
		case RegionPieces::DRAGON: {
			return "DRAGON";
		}
		case RegionPieces::NO_REGION_PIECE: {
			return "NO_REGION_PIECE";
		}
	}

	return "SOME_KIND_OF_ERROR_HAS_HAPPENED";
}

RegionPieces regionPiecesStringToEnum(std::string regionPiecesString) {

    if(regionPiecesString == "TROLL_LAIR" || regionPiecesString == "RegionPieces::TROLL_LAIR") {
    	return RegionPieces::TROLL_LAIR;
    }
    else if(regionPiecesString == "FORTRESS" || regionPiecesString == "RegionPieces::FORTRESS") {
    	return RegionPieces::FORTRESS;
    }
    else if(regionPiecesString == "MOUNTAIN" || regionPiecesString == "RegionPieces::MOUNTAIN") {
    	return RegionPieces::MOUNTAIN;
    }
    else if(regionPiecesString == "ENCAMPMENT" || regionPiecesString == "RegionPieces::ENCAMPMENT") {
    	return RegionPieces::ENCAMPMENT;
    }
    else if(regionPiecesString == "HOLES_IN_GROUND" || regionPiecesString == "RegionPieces::HOLES_IN_GROUND") {
    	return RegionPieces::HOLES_IN_GROUND;
    }
    else if(regionPiecesString == "HERO" || regionPiecesString == "RegionPieces::HERO") {
    	return RegionPieces::HERO;
    }
    else if(regionPiecesString == "DRAGON" || regionPiecesString == "RegionPieces::DRAGON") {
    	return RegionPieces::DRAGON;
    }

	return RegionPieces::NO_REGION_PIECE;
}

#endif /* REGIONPIECESHELPER_CPP_ */
