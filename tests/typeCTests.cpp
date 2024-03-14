#include "../src/Type_C.cpp"
#include "gtest/gtest.h"

TEST(TypeCTests, LevelUpTest) {
  Player* p = new Type_C("Test Player", 10, 5, 0, 0);
  p->levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(typeC.getLevel(), 1);
  ASSERT_EQ(typeC.getMaxHealth(), 11);
  ASSERT_EQ(typeC.getHealth(), 11);
  ASSERT_EQ(typeC.getAttackStrength(), 8);
}

TEST(TypeCTests, InitialStatsTest) {
  TypeC typeC("Test Player", 10 ,5, 0, 0);

  ASSERT_EQ(typeC.getLevel(), 0);
  ASSERT_EQ(typeC.getMaxHealth(), 10);
  ASSERT_EQ(typeC.getHealth(), 10);
  ASSERT_EQ(typeC.getAttackStrength(), 5);
}