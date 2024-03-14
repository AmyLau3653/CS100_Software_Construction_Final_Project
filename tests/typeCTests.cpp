#include "../header/Type_C.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeCTests, LevelUpTest) {
  Player* p = new TypeC("Test Player", 5, 5, 0, 0);
  p->levelUp();

  EXPECT_EQ(p->getName(), "Test Player");

  EXPECT_EQ(p->getNumAttack(), 9);

  EXPECT_EQ(p->getIntLevel(), 2);

  EXPECT_EQ(p->getX(), 0);
  
  EXPECT_EQ(p->getY(), 0);

  delete p;
}
