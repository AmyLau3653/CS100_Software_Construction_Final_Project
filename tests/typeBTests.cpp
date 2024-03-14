#include "../header/Type_B.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeBTests, LevelUpTest) {
  Player* p = new TypeB("Test Player", 5, 5, 0, 0);
  p->levelUp();

  EXPECT_EQ(p->getName(), "Test Player");

  EXPECT_EQ(p->getNumAttack(), 8);

  EXPECT_EQ(p->getIntLevel(), 2);

  EXPECT_EQ(p->getX(), 0);
  
  EXPECT_EQ(p->getY(), 0);

  delete p;
}