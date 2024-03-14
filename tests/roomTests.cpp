#include "../header/room.h"
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
  stringstream captured_output;
  streambuf* original_output = std::cout.rdbuf();
  cout.rdbuf(captured_output.rdbuf());

  room.getPosition();

  cout.rdbuf(original_output);
  string expected_output = "Current position: (10, 20)\n";
  EXPECT_EQ(captured_output.str(), expected_output);
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