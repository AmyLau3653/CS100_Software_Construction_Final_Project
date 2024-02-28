#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(PlayerType type, const string& name, int hp, int atk, int x, int y) :
  type(type), name(name), health(hp), maxHealth(hp),   
  attackStrength(atk), xLoc(x), yLoc(y)  {
}

int Player::getX() {
  return xLoc;
}

int Player::getY() {
  return yLoc;
}

PlayerType Player::getType() const {
  return type;
}

const string& Player::getName() const {
  return name;
}

void Player::getHealth() const {
  cout << "HP: " << health << "/" << maxHealth << endl;
  return;
}

void Player::getLevel() const {
  cout << "Level: " << level << endl;
}

void Player::getAttack() const {
  cout << "Attack: " << attackStrength << endl;
}

void Player::damage(int dmg) {
  health -= dmg;
  return;
}

void Player::attack(Player *opp) {
  opp->damage(attackStrength);

  cout << name << " does " << attackStrength 
    << " damage to " << opp->getName() << endl;
  if (!(opp->isAlive())) {
    cout << opp->getName() << " is dead! " << endl;
    cout << name << "wins!" << endl;
  }
  return;
}

bool Player::isAlive() const {
  return health > 0;
}

void Player::moveSpace(const char& c) { //check for valid input
  if (c == 'w') {
    yLoc--;
  }
  else if (c == 'a') {
    xLoc--;
  }
  else if (c == 's') {
    yLoc++;
  }
  else if (c == 'd') {
    xLoc++;
  }
  spacesMoved++;
  return;
}

int Player::getSpacesMoved() const {
  return spacesMoved;
}

Room Player::searchRoom(vector<Room> map, int x, int y) {
  for (int i = 0; i < map.size(); ++i) {
    if (map.at(i).getX() == x && map.at(i).getY() == y) {
      return map.at(i);
    }
  }
  return map.at(map.size() - 1);
}

void Player::getPosition() const { 
  cout << name << " is at (" << xLoc << ", " << yLoc << ")" << endl;
  return;
} //for testing purposes only