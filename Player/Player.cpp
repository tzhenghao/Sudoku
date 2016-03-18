#include "Player.h"
#include <string>
using namespace std;

string Player::getPlayerName() {
	return playerName;
}

void Player::setPlayerName(string name) {
	playerName = name;
}
