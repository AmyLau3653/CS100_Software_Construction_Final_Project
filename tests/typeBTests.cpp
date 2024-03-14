#include "../src/Type_B.cpp"
#include "gtest/gtest.h"

TEST(TypeBTests, LevelUpTest) {
  Player* p = new Type_B("Test Player", 10, 5, 0, 0);
  p->levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(Type_B.getLevel(), 1);
  ASSERT_EQ(Type_B.getMaxHealth(), 13);
  ASSERT_EQ(Type_B.getHealth(), 13);
  ASSERT_EQ(Type_B.getAttackStrength(), 6);
}

TEST(TypeBTests, InitialStatsTest) {
  Player* p = new Type_B("Test Player", 10, 5, 0, 0);

  ASSERT_EQ(Type_B.getLevel(), 0);
  ASSERT_EQ(Type_B.getMaxHealth(), 10);
  ASSERT_EQ(Type_B.getHealth(), 10);
  ASSERT_EQ(Type_B.getAttackStrength(), 5);
}