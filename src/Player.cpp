#include "../header/Player.h"
#include "../header/Output.h"
#include <iostream>
using namespace std;



Player::Player(PlayerType type, const string& name, int hp, int atk, int x, int y) :
  type(type), name(name), health(hp), maxHealth(hp),   
  attackStrength(atk), xLoc(x), yLoc(y)  {
}

Player::~Player() {}

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

int Player::getIntLevel() const {
  return level;
}

void Player::getAttack() const {
  cout << "Attack: " << attackStrength << endl;
}

int Player::getNumAttack() const {
  return attackStrength;
}

void Player::damage(int dmg) {
  health -= dmg;
  return;
}

void Player::attack(Player *opp) {
  Output output;
  Output output;
  opp->damage(attackStrength);

  output.OutputFight(this, opp);
  if (!(opp->isAlive())) {
    output.OutputDeath(opp);
    output.OutputWin(this);
  }
  return;
}

bool Player::isAlive() const {
  return health > 0;
}

void Player::moveSpace(const string& c) { //check for valid input
  if (c == "w") {
    yLoc--;
  }
  else if (c == "a") {
    xLoc--;
  }
  else if (c == "s") {
    yLoc++;
  }
  else if (c == "d") {
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

int Player::Manhattan(int x2, int y2) {
  return (abs(xLoc - x2) + abs(yLoc - y2));
}

bool Player::isClose(int x, int y) {
  return(Manhattan(x, y) == 1);
}

int Player::getNumLevel() const {
  return level;
}

int Player::getNumAttack() const {
  return attackStrength;
}