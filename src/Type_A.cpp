#include "../header/Type_A.h"
#include <iostream>
using namespace std;

TypeA::TypeA(const string &name, int hp, int atk, int x, int y)
    : Player(TYPE_A, name, BASEHP0, BASEATK0, x, y) {}

void TypeA::levelUp() {
  maxHealth += 2;
  health = maxHealth;
  attackStrength += 2;
  level++;
  cout << "Level up! " << name << " is now level " << level << 
    endl;
}