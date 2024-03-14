#include "../src/Type_C.cpp"
#include "gtest/gtest.h"

TEST(TypeCTests, LevelUpTest) {
  Player* p = new Type_C("Test Player", 10, 5, 0, 0);
  p->levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(p.getLevel(), 1);
  ASSERT_EQ(p.getMaxHealth(), 11);
  ASSERT_EQ(p.getHealth(), 11);
  ASSERT_EQ(p.getAttackStrength(), 8);
}

TEST(TypeCTests, InitialStatsTest) {
  Player* p = new Type_C("Test Player", 10, 5, 0, 0);

  ASSERT_EQ(p.getLevel(), 0);
  ASSERT_EQ(p.getMaxHealth(), 10);
  ASSERT_EQ(p.getHealth(), 10);
  ASSERT_EQ(p.getAttackStrength(), 5);
}