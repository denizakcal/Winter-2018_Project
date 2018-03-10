#ifndef REGIONSOFMAPSHELPER_HPP
#define REGIONSOFMAPSHELPER_HPP

#include "RegionsOfMaps.hpp"
#include <string>

using namespace std;

bool isMountain(RegionsOfMaps regionsOfMaps);
bool isHill(RegionsOfMaps regionsOfMaps);
bool isSea(RegionsOfMaps regionsOfMaps);
bool isSwamp(RegionsOfMaps regionsOfMaps);
bool isForest(RegionsOfMaps regionsOfMaps);
bool isSameMap(RegionsOfMaps regionsOfMaps);
std::string regionsOfMapsEnumToString(RegionsOfMaps regionsOfMaps);
RegionsOfMaps regionsOfMapsStringToEnum(std::string regionString);

#endif // REGIONSOFMAPSHELPER_HPP
