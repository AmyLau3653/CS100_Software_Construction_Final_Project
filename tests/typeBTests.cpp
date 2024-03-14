#include "../header/Type_B.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeBTests, LevelUpTest) {
  Player* p = new TypeB("Test Player", 5, 5, 0, 0);
  p->levelUp();

  // ASSERT_EQ(ss.str(), "Level up!");
  // ASSERT_EQ(p.getLevel(), 1);
  // ASSERT_EQ(p.getMaxHealth(), 13);
  // ASSERT_EQ(p.getHealth(), 13);
  // ASSERT_EQ(p.getAttackStrength(), 6);
}

// TEST(TypeBTests, InitialStatsTest) {
//   Player* p = new Type_B("Test Player", 10, 5, 0, 0);

//   ASSERT_EQ(p.getLevel(), 0);
//   ASSERT_EQ(p.getMaxHealth(), 10);
//   ASSERT_EQ(p.getHealth(), 10);
//   ASSERT_EQ(p.getAttackStrength(), 5);
// }