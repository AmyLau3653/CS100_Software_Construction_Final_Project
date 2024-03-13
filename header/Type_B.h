#ifndef TYPE_B_H_
#define TYPE_B_H_
#include "Player.h"
using namespace std;
const int BASEHP1 = 6, BASEATK1 = 4;
class TypeB: public Player {
  public:
  TypeB(const string&, int, int, int, int);
  void levelUp();
};
#endif