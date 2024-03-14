// #include "../src/Player.cpp"
// #include "../src/Type_A.cpp"
// #include "../src/Type_B.cpp"
// #include "gtest/gtest.h"

#include "../header/Player.h"
#include "../header/Type_A.h"
#include "../header/Type_B.h"
#include "gtest/gtest.h"

TEST(PlayerTests, getXTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1 -> getX(), 1);
}

TEST(PlayerTests, getYTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1->getY(), 2);
}

TEST(PlayerTests, getTypeTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1->getType(), TYPE_A);
}

TEST(PlayerTests, getNameTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1->getName(), "Bob");
}

TEST(PlayerTests, isAliveTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_TRUE(P1 -> isAlive());
} 

TEST(PlayerTests, moveSpaceTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  P1->moveSpace('a');
  EXPECT_EQ(P1->getX(), 1);
}

TEST(PlayerTests, getSpacesMovedTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1->getSpacesMoved(), 0);
}

TEST(PlayerTests, getPositionTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  P1->getPosition();
}

TEST(PlayerTests, isCloseTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_TRUE(P1->isClose(2, 1));
}

TEST(PlayerTests, getNumLevelTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1->getNumLevel(), 1);
}

TEST(PlayerTests, getNumAttackTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1->getNumAttack(), 5);
}