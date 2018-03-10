
#include "PowerBadgesHelper.hpp"

#include <string>

using namespace std;

std::string powerBadgesEnumToString(PowerBadges powerBadgeEnum) {

	switch(powerBadgeEnum) {

		case PowerBadges::COMMANDO: {

			return "COMMANDO";
		}
		case PowerBadges::ALCHEMIST: {

			return "ALCHEMIST";
		}
		case PowerBadges::FORTIFIED: {

			return "FORTIFIED";
		}
		case PowerBadges::MERCHANT: {

			return "MERCHANT";
		}
		case PowerBadges::SPIRIT: {

			return "SPIRIT";
		}
		case PowerBadges::HILL: {

			return "HILL";
		}
		case PowerBadges::BIVOUACKING: {

			return "BIVOUACKING";
		}
		case PowerBadges::BERSERK: {

			return "BERSERK";
		}
		case PowerBadges::DIPLOMAT: {

			return "DIPLOMAT";
		}
		case PowerBadges::DRAGON_MASTER: {

			return "DRAGON_MASTER";
		}
		case PowerBadges::MOUNTED: {

			return "MOUNTED";
		}
		case PowerBadges::PILLAGING: {

			return "PILLAGING";
		}
		case PowerBadges::FLYING: {

			return "FLYING";
		}
		case PowerBadges::SEAFARING: {

			return "SEAFARING";
		}
		case PowerBadges::FOREST: {

			return "FOREST";
		}
		case PowerBadges::HEROIC: {

			return "HEROIC";
		}
		case PowerBadges::STOUT: {

			return "STOUT";
		}
		case PowerBadges::SWAMP: {

			return "SWAMP";
		}
		case PowerBadges::UNDERWORLD: {

			return "UNDERWORLD";
		}
		case PowerBadges::WEALTHY: {

			return "WEALTHY";
		}
		case PowerBadges::NO_POWER_BADGE: {

			return "NO_POWER_BADGE";
		}
		default: {

			return "SomethingWentWrong";
		}
	}
}

PowerBadges powerBadgesStringToEnum(std::string powerBadgesString) {

	if(powerBadgesString == "COMMANDO" || powerBadgesString == "PowerBadges::COMMANDO") {
		return PowerBadges::COMMANDO;
	}
	else if(powerBadgesString == "ALCHEMIST" || powerBadgesString == "PowerBadges::ALCHEMIST") {
		return PowerBadges::ALCHEMIST;
	}
	else if(powerBadgesString == "FORTIFIED" || powerBadgesString == "PowerBadges::FORTIFIED") {
		return PowerBadges::FORTIFIED;
	}
	else if(powerBadgesString == "MERCHANT" || powerBadgesString == "PowerBadges::MERCHANT") {
		return PowerBadges::MERCHANT;
	}
	else if(powerBadgesString == "SPIRIT" || powerBadgesString == "PowerBadges::SPIRIT") {
		return PowerBadges::SPIRIT;
	}
	else if(powerBadgesString == "HILL" || powerBadgesString == "PowerBadges::HILL") {
		return PowerBadges::HILL;
	}
	else if(powerBadgesString == "BIVOUACKING" || powerBadgesString == "PowerBadges::BIVOUACKING") {
		return PowerBadges::BIVOUACKING;
	}
	else if(powerBadgesString == "BIVOUACKING" || powerBadgesString == "PowerBadges::BIVOUACKING") {
		return PowerBadges::BERSERK;
	}
	else if(powerBadgesString == "DIPLOMAT" || powerBadgesString == "PowerBadges::DIPLOMAT") {
		return PowerBadges::DIPLOMAT;
	}
	else if(powerBadgesString == "DRAGON_MASTER" || powerBadgesString == "PowerBadges::DRAGON_MASTER") {
		return PowerBadges::DRAGON_MASTER;
	}
	else if(powerBadgesString == "MOUNTED" || powerBadgesString == "PowerBadges::MOUNTED") {
		return PowerBadges::MOUNTED;
	}
	else if(powerBadgesString == "MOUNTED" || powerBadgesString == "PowerBadges::MOUNTED") {
		return PowerBadges::PILLAGING;
	}
	else if(powerBadgesString == "FLYING" || powerBadgesString == "PowerBadges::FLYING") {
		return PowerBadges::FLYING;
	}
	else if(powerBadgesString == "SEAFARING" || powerBadgesString == "PowerBadges::SEAFARING") {
		return PowerBadges::SEAFARING;
	}
	else if(powerBadgesString == "FOREST" || powerBadgesString == "PowerBadges::FOREST") {
		return PowerBadges::FOREST;
	}
	else if(powerBadgesString == "HEROIC" || powerBadgesString == "PowerBadges::HEROIC") {
		return PowerBadges::HEROIC;
	}
	else if(powerBadgesString == "STOUT" || powerBadgesString == "PowerBadges::STOUT") {
		return PowerBadges::STOUT;
	}
	else if(powerBadgesString == "SWAMP" || powerBadgesString == "PowerBadges::SWAMP") {
		return PowerBadges::SWAMP;
	}
	else if(powerBadgesString == "UNDERWORLD" || powerBadgesString == "PowerBadges::UNDERWORLD") {
		return PowerBadges::UNDERWORLD;
	}
	else if(powerBadgesString == "WEALTHY" || powerBadgesString == "PowerBadges::WEALTHY") {
		return PowerBadges::WEALTHY;
	}

	return PowerBadges::NO_POWER_BADGE;
}
