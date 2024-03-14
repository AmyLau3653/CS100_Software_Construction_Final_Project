// #include "../src/Output.cpp"
// #include "../src/Player.cpp"
// #include "../src/Type_A.cpp"
// #include "../src/Type_B.cpp"
// #include "gtest/gtest.h"

#include "../header/Output.h"
#include "../header/Player.h"
#include "../header/Type_A.h"
#include "../header/Type_B.h"
#include "gtest/gtest.h"


TEST(OutputTest, OutputDeathTest) {
  Output output;
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  output.OutputDeath(P1);
}

TEST(OutputTest, OutputEncounterTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Player *P2 = new TypeB("Bob", BASEHP0, BASEATK0, 1, 2);
  Output output;
  output.OutputEncounter(P1, P2);
}

TEST(OutputTest, OutputChoiceTest) {
  Output output;
  output.OutputChoice();
}

TEST(OutputTest, OutputChoiceMoveStayTest) {
  Output output;
  output.OutputChoiceMoveStay();
}

TEST(OutputTest, OutputChoiceThreeOptionsTest) {
  Output output;
  output.OutputChoiceThreeOptions();
}

TEST(OutputTest, OutputGameSetupTest) {
  Output output;
  output.OutputGameSetup("Bob");
}

TEST(OutputTest, OutputMoveTest) {
  Output output;
  output.OutputMove();
}

TEST(OutputTest, OutputLevelUpPlayerTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Output output;
  output.OutputLevelUpPlayer(P1);
}

TEST(OutputTest, OutputAnalyzeTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Output output;
  output.OutputAnalyze(P1);
}

TEST(OutputTest, OutputWinTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Output output;
  output.OutputWin(P1);
}

TEST(OutputTest, OutputMenuTest) {
  Output output;
  output.OutputMenu();
}

TEST(OutputTest, OutputPlayTest) {
  Output output;
  output.OutputPlay();
}

TEST(OutputTest, OutputHowToPlayTest) {
  Output output;
  output.OutputHowToPlay();
}

TEST(OutputTest, OutputExitRoomTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Output output;
  output.OutputExitRoom(P1);
}

TEST(OutputTest, OutputFightTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Player *P2 = new TypeB("Bob", BASEHP0, BASEATK0, 1, 2);
  Output output;
  output.OutputFight(P1, P2);
}

TEST(OutputTest, OutputPhaseTest) {
  Player *P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  Output output;
  output.OutputPhase(P1, 2);
}

TEST(OutputTest, OutputChoiceAttackTest) {
  Output output;
  output.OutputChoiceAttack();
}

TEST(OutputTest, OutputChooseMapSizeTest) {
  Output output;
  output.OutputChooseMapSize();
}

TEST(OutputTest, OutputChoosePlayerNameTest) {
  Output output;
  output.OutputChoosePlayerName(1);
}

TEST(OutputTest, OutputEnemyCloseTest) {
  Output output;
  output.OutputEnemyClose("Tom");
}

TEST(OutputTest, OutputExitCloseTest) {
  Output output;
  output.OutputExitClose();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}