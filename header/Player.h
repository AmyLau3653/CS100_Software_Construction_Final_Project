#include "room.h"
#include <string>
#include <vector>
using namespace std;

#ifndef PLAYER_H_
#define PLAYER_H_

enum PlayerType { TYPE_A, TYPE_B, TYPE_C };

class Player {
protected:
  PlayerType type;
  string name;
  int level = 1;
  int spacesMoved = 0;
  int health, maxHealth;
  int attackStrength;
  int xLoc, yLoc;

public:
  Player(PlayerType, const string &, int, int, int, int);
  // note: health and attack will be defaulted
  ~Player();
  PlayerType getType() const;
  const string &getName() const;
  void getHealth() const;
  void getLevel() const; //
  int getIntLevel() const;
  void getAttack() const;

  void damage(int);
  virtual void levelUp() = 0;
  void moveSpace(const string &c);
  int getSpacesMoved() const;
  bool isAlive() const;
  void attack(Player*);
  void getPosition() const; // for testing purposes only
  void analyze(Player &);
  int getX(), getY();
  Room searchRoom(vector<Room>, int, int);
};

//add in output.h functions later
#endif
