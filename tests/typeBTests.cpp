#include "../src/Type_B.cpp"
#include "gtest/gtest.h"

TEST(TypeBTests, LevelUpTest) {
  TypeB typeB("Test Player", 10, 5, 0, 0);
  typeB.levelUp();

  ASSERT_EQ(ss.str(), "Level up!");
  ASSERT_EQ(typeB.getLevel(), 1);
  ASSERT_EQ(typeB.getMaxHealth(), 13);
  ASSERT_EQ(typeB.getHealth(), 13);
  ASSERT_EQ(typeB.getAttackStrength(), 6);
}

TEST(TypeBTests, InitialStatsTest) {
  TypeB typeB("Test Player", 10 ,5, 0, 0);

  ASSERT_EQ(typeB.getLevel(), 0);
  ASSERT_EQ(typeB.getMaxHealth(), 10);
  ASSERT_EQ(typeB.getHealth(), 10);
  ASSERT_EQ(typeB.getAttackStrength(), 5);
}