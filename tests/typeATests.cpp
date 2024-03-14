#include "../header/Type_A.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeATests, LevelUpTest) {
  Player* p = new TypeA("Test Player", 5, 5, 0, 0);
  p->levelUp();

  EXPECT_EQ(p->getName(), "Test Player");

  EXPECT_EQ(p->getNumAttack(), 7);

  EXPECT_EQ(p->getNumLevel(), 2);

  EXPECT_EQ(p->getX(), 0);
  
  EXPECT_EQ(p->getY(), 0);

  delete p;
}