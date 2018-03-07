
#include "Player.hpp"

#include <string>

Player::Player() {
	// TODO Auto-generated constructor stub

}

void Player::setName(std::string name) {

	this->name = name;
}

void Player::setGraph(Graph* subGraph) {

	this->subGraph = subGraph;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

