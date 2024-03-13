#ifndef TYPE_A_H_
#define TYPE_A_H_
#include "../header/Player.h"
using namespace std;
const int BASEATK0 = 5, BASEHP0 = 5;
class TypeA : public Player {
public:
  TypeA(const string &, int, int, int, int);
  void levelUp();
};
#endif