#include "../header/Type_A.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeATests, LevelUpTest) {
  Player* p = new TypeA("Test Player", 5, 5, 0, 0);
  p->levelUp();
}