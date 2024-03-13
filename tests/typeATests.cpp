#include "../src/Type_A.cpp"
#include "gtest/gtest.h"

TEST(TypeATests, LevelUpTest) {
  TypeA typeA("Test Player", 10 ,5, 0, 0);
  typeA.levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(typeA.getLevel(), 1);
  ASSERT_EQ(typeA.getMaxHealth(), 12);
  ASSERT_EQ(typeA.getHealth(), 12);
  ASSERT_EQ(typeA.getAttackStrength(), 7);
}

TEST(TypeATests, InitialStatsTest) {
  TypeA typeA("Test Player", 10 ,5, 0, 0);

  ASSERT_EQ(typeA.getLevel(), 0);
  ASSERT_EQ(typeA.getMaxHealth(), 10);
  ASSERT_EQ(typeA.getHealth(), 10);
  ASSERT_EQ(typeA.getAttackStrength(), 5);
}