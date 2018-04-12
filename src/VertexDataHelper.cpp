
#include "VertexDataHelper.hpp"

namespace VertexDataHelper {

	namespace {

		std::string regionPiecesVectorToString(std::vector<RegionPieces> regionPieces) {

			std::string str = "";

			for(unsigned int i = 0; i < regionPieces.size(); i++) {

				str += regionPiecesEnumToString( regionPieces.at(i) );
			}

			return str;
		}
	}

	std::string vertexDataToString(VertexData v) {

		std::string str = "";
		str += "Power badge: " + powerBadgesEnumToString(v.powerBadge);
		str += "Race: " + racesEnumToString(v.race);
		str += "Race multiplicity: " + std::to_string(v.raceMultiplicity);
		str += "Region pieces: " + regionPiecesVectorToString(v.regionPieces);

		return str;
	}
}
