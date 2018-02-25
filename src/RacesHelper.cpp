#include "RacesHelper.hpp"

std::string racesEnumToString(Races racesEnum) {

	switch(racesEnum) {

		case Races::AMAZONS: {

			return "AMAZONS";
		}
		case Races::DWARVES: {

			return "DWARVES";
		}
		case Races::ELVES: {

			return "ELVES";
		}
		case Races::GHOULS: {

			return "GHOULS";
		}
		case Races::GIANTS: {

			return "GIANTS";
		}
		case Races::HALFLINGS: {

			return "HALFLINGS";
		}
		case Races::HUMANS: {

			return "HUMANS";
		}
		case Races::ORCS: {

			return "ORCS";
		}
		case Races::RATMEN: {

			return "RATMEN";
		}
		case Races::SKELETONS: {

			return "SKELETONS";
		}
		case Races::SORCERERS: {

			return "SORCERERS";
		}
		case Races::TRITONS: {

			return "TRITONS";
		}
		case Races::TROLLS: {

			return "TROLLS";
		}
		case Races::WIZARDS: {

			return "WIZARDS";
		}
	}

	return "NO_RACE";
}

Races racesStringToEnum(std::string racesString) {

	if(racesString == "AMAZONS" || racesString == "Races::AMAZONS") {
		return Races::AMAZONS;
	}
	else if(racesString == "DWARVES" || racesString == "Races::DWARVES") {
		return Races::DWARVES;
	}
	else if(racesString == "ELVES" || racesString == "Races::ELVES") {
		return Races::ELVES;
	}
	else if(racesString == "GHOULS" || racesString == "Races::GHOULS") {
		return Races::GHOULS;
	}
	else if(racesString == "GIANTS" || racesString == "Races::GIANTS") {
		return Races::GIANTS;
	}
	else if(racesString == "HALFLINGS" || racesString == "Races::HALFLINGS") {
		return Races::HALFLINGS;
	}
	else if(racesString == "HUMANS" || racesString == "Races::HUMANS") {
		return Races::HUMANS;
	}
	else if(racesString == "ORCS" || racesString == "Races::ORCS") {
		return Races::ORCS;
	}
	else if(racesString == "RATMEN" || racesString == "Races::RATMEN") {
		return Races::RATMEN;
	}
	else if(racesString == "SKELETONS" || racesString == "Races::SKELETONS") {
		return Races::SKELETONS;
	}
	else if(racesString == "SORCERERS" || racesString == "Races::SORCERERS") {
		return Races::SORCERERS;
	}
	else if(racesString == "TRITONS" || racesString == "Races::TRITONS") {
		return Races::TRITONS;
	}
	else if(racesString == "TROLLS" || racesString == "Races::TROLLS") {
		return Races::TROLLS;
	}
	else if(racesString == "WIZARDS" || racesString == "Races::WIZARDS") {
		return Races::WIZARDS;
	}

	return Races::NO_RACE;
}
