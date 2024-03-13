#include "../header/Type_B.h"
#include <iostream>
#include "Output.h"
using namespace std;

TypeB ::TypeB(const string &name, int hp, int atk, int x, int y)
    : Player(TYPE_B, name, BASEHP1, BASEATK1, x, y) {}

void TypeB::levelUp() {
  maxHealth += 3;
  health = maxHealth;
  attackStrength += 1;
  level++;
  //cout << "Level up! " << name << " is now level " << level << endl;
  OutputLevelUpPlayer(this);
}