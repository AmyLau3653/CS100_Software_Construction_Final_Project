#include "../header/Type_B.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeBTests, LevelUpTest) {
  Player* p = new TypeB("Test Player", 5, 5, 0, 0);
  p->levelUp();
}