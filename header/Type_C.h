#ifndef TYPE_C_H_
#define TYPE_C_H_
#include "Player.h"
using namespace std;
const int BASEHP2 = 4, BASEATK2 = 6;
class TypeC: public Player {
  public:
  TypeC(const string&, int, int, int, int);
  void levelUp();
};
#endif