#include "../src/Output.cpp"
#include "../src/Player.cpp"
#include "../src/Type_A.cpp"
#include "../src/Type_B.cpp"
#include "gtest/gtest.h"

TEST(OutputTest, OutputDeathTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputDeath(P1);
}

TEST(OutputTest, OutputEncounterTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  P2 = new TypeB("Bob", BASEHP0, BASEATK0, 1, 2);
  OutputEncounter(P1, P2);
}

TEST(OutputTest, OutputChoiceTest) {
  OutputChoice();
}

TEST(OutputTest, OutputChoiceMoveStayTest) {
  OutputChoiceMoveStay();
}

TEST(OutputTest, OutputChoiceThreeOptionsTest) {
  OutputChoiceThreeOptions();
}

TEST(OutputTest, OutputGameSetupTest) {
  OutputGameSetup("Bob");
}

TEST(OutputTest, OutputMoveTest) {
  OutputMove();
}

TEST(OutputTest, OutputLevelUpPlayerTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputLevelUpPlayer(P1);
}

TEST(OutputTest, OutputAnalyzeTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputAnalyze(P1);
}

TEST(OutputTest, OutputWinTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputWinTest(P1);
}

TEST(OutputTest, OutputMenuTest) {
  OutputMenu();
}

TEST(OutputTest, OutputPlayTest) {
  OutputPlay();
}

TEST(OutputTest, OutputHowToPlayTest) {
  OutputHowToPlay();
}

TEST(OutputTest, OutputExitRoomTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputExitRoom(P1);
}

TEST(OutputTest, OutputFightTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  P2 = new TypeB("Bob", BASEHP0, BASEATK0, 1, 2);
  OutputFight(P1, P2);
}

TEST(OutputTest, OutputPhaseTest) {
  P1 = new TypeA("Bob", BASEHP0, BASEATK0, 1, 1);
  OutputPhase(P1, 2);
}

TEST(OutputTest, OutputChoiceAttackTest) {
  OutputChoiceAttack();
}

TEST(OutputTest, OutputChooseMapSizeTest) {
  OutputChooseMapSize();
}

TEST(OutputTest, OutputChoosePlayerNameTest) {
    OutputChoosePlayerName(1);
}

TEST(OutputTest, OutputEnemyCloseTest) {
  OutputEnemyClose("Tom");
}

TEST(OutputTest, OutputExitCloseTest) {
  OutputExitClose();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}