
#ifndef REGIONPIECESHELPER_HPP_
#define REGIONPIECESHELPER_HPP_

#include "RegionPieces.hpp"

#include <string>

using namespace std;

RegionPieces regionPiecesStringToEnum(std::string regionPiecesString);
std::string regionPiecesEnumToString(RegionPieces regionPiecesEnum);

#endif /* REGIONPIECESHELPER_HPP_ */
