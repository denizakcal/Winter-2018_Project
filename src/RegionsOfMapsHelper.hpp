#ifndef REGIONSOFMAPSHELPER_H
#define REGIONSOFMAPSHELPER_H

#include "RegionsOfMaps.hpp"
#include <string>

using namespace std;

bool isMountain(RegionsOfMaps regionsOfMaps);
bool isHill(RegionsOfMaps regionsOfMaps);
bool isSea(RegionsOfMaps regionsOfMaps);
bool isSwamp(RegionsOfMaps regionsOfMaps);
bool isForest(RegionsOfMaps regionsOfMaps);
bool isSameMap(RegionsOfMaps regionsOfMaps);
std::string enumToString(RegionsOfMaps regionsOfMaps);
RegionsOfMaps regionsStringToEnum(std::string regionString);

#endif // REGIONSOFMAPSHELPER_H
