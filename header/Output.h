using namespace std;

#include "Player.h"
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
  void OutputAnalyze(Player*, Player*);
  void OutputEncounter(Player*, Player*);
  void OutputEscapeWin(Player*);
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
  void OutputDirectionChoice(int py1, int px1, int n);
  void OutputNewLine();
  void OutputConflict(Player* currPlayer, Player* oppPlayer);
  void OutputWin(Player* p);
  void OutputEnemyClose(string);
  void OutputExitClose();
private: 
  void OutputColor(int, int, string);
};

#endif