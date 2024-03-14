#include "../src/room.cpp"
#include "gtest/gtest.h"

TEST(RoomTests, ConstructionTest) {
  Room room(1, 10, 20);

  EXPECT_EQ(room.getX(), 10);
  EXPECT_EQ(room.getY(), 20);
  EXPECT_EQ(room.getID(), 1);
  EXPECT_FALSE(room.Exodus());
}

TEST(RoomTests, PositionTest) {
  Room room(1, 10, 20);
  room.getPosition();

  EXPECT_EQ(output, "Current position: (10, 20)\n");
}

TEST(RoomTests, ExitTest) {
  Room room(1, 10, 20);
  room.setExit();

  EXPECT_TRUE(room.Exodus());
}

TEST(RoomTests, ConflictTest) {
  Room room (1, 10, 20);

  EXPECT_TRUE(room.conflict(10, 20, 10, 20));
  EXPECT_FALSE(room.conflict(10, 20, 15, 25));
}