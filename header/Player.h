#ifndef PLAYER_H_
#define PLAYER_H_
#include "room.h"
#include <string>
#include <vector>
using namespace std;



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
  void getAttack() const;
  int getNumLevel() const;
  int getNumAttack() const;
  void damage(int);
  virtual void levelUp() = 0;
  void moveSpace(const char &c);
  int getSpacesMoved() const;
  bool isAlive() const;
  void attack(Player*);
  void getPosition() const; // for testing purposes only
  void analyze(Player &);
  int getX(), getY();
  Room searchRoom(vector<Room>, int, int);
  bool isClose(int, int);
private:
  int Manhattan(int, int);
};

//add in output.h functions later
#endif