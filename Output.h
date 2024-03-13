using namespace std;

#include "header/Player.h"
#include "wrongInput.hpp"

#ifndef __OUTPUT_H__
#define __OUTPUT_H__

class Output {
public:
  Output();
  void OutputDeath(Player*);
  void OutputChoice();
  void OutputGameSetup();
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

private: 
  void OutputColor(int, int, string);
};

#endif