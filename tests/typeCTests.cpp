#include "../src/Type_C.cpp"
#include "gtest/gtest.h"

TEST(TypeCTests, LevelUpTest) {
  Player* p = new Type_C("Test Player", 10, 5, 0, 0);
  p->levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(Type_C.getLevel(), 1);
  ASSERT_EQ(Type_C.getMaxHealth(), 11);
  ASSERT_EQ(Type_C.getHealth(), 11);
  ASSERT_EQ(Type_C.getAttackStrength(), 8);
}

TEST(TypeCTests, InitialStatsTest) {
  Player* p = new Type_C("Test Player", 10, 5, 0, 0);

  ASSERT_EQ(Type_C.getLevel(), 0);
  ASSERT_EQ(Type_C.getMaxHealth(), 10);
  ASSERT_EQ(Type_C.getHealth(), 10);
  ASSERT_EQ(Type_C.getAttackStrength(), 5);
}