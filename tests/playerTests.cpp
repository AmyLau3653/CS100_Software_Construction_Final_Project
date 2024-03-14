#include "../src/Player.cpp"
#include "../src/Type_A.cpp"
#include "../src/Type_B.cpp"
#include "gtest/gtest.h"

TEST(PlayerTests, getXTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getX(), 1);
}

TEST(PlayerTests, getXTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getY(), 2);
}

TEST(PlayerTests, getTypeTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getType(), TYPE_A);
}

TEST(PlayerTests, getNameTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getName(), "Bob");
}

TEST(PlayerTests, getHealthTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getHealth(), 5);
}
TEST(PlayerTests, getLevelTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getLevel(), 1);
}

TEST(PlayerTests, getAttackTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_EQ(P1.getAttack(), 5);
}

// no damage and attack test

TEST(PlayerTests, isAliveTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 2);
  EXPECT_TRUE(P1.isAlive());
} 

TEST(PlayerTests, moveSpaceTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  P1.moveSpace('a');
  EXPECT_EQ(P1.getX(), 1);
}

TEST(PlayerTests, getSpacesMovedTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1.getSpacesMoved(), 0);
}

TEST(PlayerTests, getPositionTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  P1.getPosition();
}

TEST(PlayerTests, ManhattanTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1.Manhattan(1, 1), 2);
}

TEST(PlayerTests, isCloseTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_TRUE(P1.isClose(2, 1));
}

TEST(PlayerTests, getNumLevelTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1.getNumLevel(), 1);
}

TEST(PlayerTests, getNumAttackTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 2, 2);
  EXPECT_EQ(P1.getNumAttack(), 5);
}