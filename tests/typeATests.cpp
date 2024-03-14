#include "../src/Type_A.cpp"
#include "gtest/gtest.h"

TEST(TypeATests, LevelUpTest) {
  Player* p = new Type_A("Test Player", 10, 5, 0, 0);
  p->levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(Type_A.getLevel(), 1);
  ASSERT_EQ(Type_A.getMaxHealth(), 12);
  ASSERT_EQ(Type_A.getHealth(), 12);
  ASSERT_EQ(Type_A.getAttackStrength(), 7);
}

TEST(TypeATests, InitialStatsTest) {
  Player* p = new Type_A("Test Player", 10, 5, 0, 0);

  ASSERT_EQ(Type_A.getLevel(), 0);
  ASSERT_EQ(Type_A.getMaxHealth(), 10);
  ASSERT_EQ(Type_A.getHealth(), 10);
  ASSERT_EQ(Type_A.getAttackStrength(), 5);
}