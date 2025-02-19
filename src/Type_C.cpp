#include "../header/Type_C.h"
#include "../header/Type_C.h"
#include <iostream>
#include "../header/Output.h"
using namespace std;

TypeC::TypeC(const string &name, int hp, int atk, int x, int y)
    : Player(TYPE_C, name, BASEHP2, BASEATK2, x, y) {}

void TypeC::levelUp() {
  Output output;
  maxHealth += 1;
  health = maxHealth;
  attackStrength += 3;
  level++;
  //cout << "Level up! " << name << " is now level " << level << endl;
  output.OutputLevelUpPlayer(this);
}