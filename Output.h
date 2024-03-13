using namespace std;

#include "header/Player.h"
#include "wrongInput.hpp"

#ifndef __OUTPUT_H__
#define __OUTPUT_H__

class Output {
public:
  Output() = default;
  void OutputDeath(Player*);
  void OutputChoice();
  void OutputGameSetup(const string& pName);
  void OutputMove();
  void OutputLevelUpPlayer(Player*);
  void OutputAnalyze(Player*);
  void OutputEncounter(Player*, Player*);
  void OutputWin(Player*);
  void OutputMenu();
  void OutputPlay();
  void OutputHowToPlay();
  void OutputExitRoom(Player*);
  void OutputFight(Player*, Player*);
  void OutputPhase(Player* p, int PlayerPhase);
  void OutputChoiceAttack();
  void OutputChoiceMoveStay();
  void OutputChoiceThreeOptions();
  void OutputChooseMapSize();
  void OutputChoosePlayerName(int playerNum);

private: 
  void OutputColor(int, int, string);
};

#endif