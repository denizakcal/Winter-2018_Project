// WHY DOES THE ifndef STUFF MAKE THE CODE NOT WORK AT ALL, ONLY IN THIS FILE?!!!

//#ifndef REGIONPIECESHELPER_HPP_
//#define REGIONPIECESHELPER_HPP_

#include "RegionPieces.hpp"
#include <string>

RegionPieces regionPiecesStringToEnum(std::string regionPiecesString);
std::string regionPiecesEnumToString(RegionPieces regionPiecesEnum);

//#endif /* REGIONPIECESHELPER_HPP_ */
