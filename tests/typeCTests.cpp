#include "../header/Type_C.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeCTests, LevelUpTest) {
  Player* p = new TypeC("Test Player", 5, 5, 0, 0);
  p->levelUp();
}