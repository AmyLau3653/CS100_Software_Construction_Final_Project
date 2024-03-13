using namespace std;

#include "header/Player.h"
#include "header/wrongInput.hpp"

#ifndef __OUTPUT_H__
#define __OUTPUT_H__

class Output {
public:
  Output();
  void OutputDeath(Player*);
  void OutputChoice();
  void OutputGameSetup();
  void OutputMove(Player*);
  void OutputLevelUpPlayer(Player*);
  void OutputAnalyze(Player*, Player*);
  void OutputEncounter(Player*, Player*);
  void OutputWin(Player*);
  void OutputMenu();
  void OutputPlay();
  void OutputHowToPlay();
  void OutputExitRoom(Player*);
  void OutputFight(Player*, Player*);
  void OutputEnemyIsClose(Player*, Player*);
  void OutputExitIsClose(Player*, int, int); //write new function to immediately access exit

private: 
  void OutputColor(int, int, string);
};

#endif