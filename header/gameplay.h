#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "../header/Player.h"
#include "../header/room.h"
#include "../header/Output.h"
#include "../header/wrongInput.hpp"
using namespace std;



void analyze(Player *currPlayer, Player *oppPlayer, Output& o) {
  o.OutputAnalyze(currPlayer, oppPlayer);
  o.OutputNewLine();
}

void move(Player *currPlayer, Player *oppPlayer, Room currRoom, int n, vector<Room> map, Output& o) {
  string direction;
  InvalidInput i;

  int currY = currPlayer->getY();
  int currX = currPlayer->getX();
  int oppX = oppPlayer->getX();
  int oppY = oppPlayer->getY();

  o.OutputDirectionChoice(currY, currX, n);

  direction = i.validateMove(currX, currY, n);
  if (direction == "c") {
    int m = 3;
    o.OutputChoice();
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      o.OutputChoiceAttack();
      m = 4;
    }
    o.OutputNewLine();

    int choice;
    choice = i.validateNumInputRange(1, m);
    cout << "FIXME: Cancel option still in progress" << endl;
  } 
  else {
    currPlayer->moveSpace(direction);

    currRoom =
        currPlayer->searchRoom(map, currPlayer->getX(), currPlayer->getY());

    if (currPlayer->getSpacesMoved() % 2 == 0) {
      currPlayer->levelUp();
      o.OutputLevelUpPlayer(currPlayer); 
      o.OutputNewLine();// MAYBE DONT NEED
    }
    if (currRoom.Exodus()) {
      o.OutputEscapeWin(currPlayer);
      exit(0);
    }
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      o.OutputEncounter(currPlayer, oppPlayer);
      o.OutputConflict(currPlayer, oppPlayer);
      o.OutputNewLine();

      int choice = i.validateTurn();
      if (choice == 1) {
        currPlayer->attack(oppPlayer);
      } else if (choice == 3) {
        analyze(currPlayer, oppPlayer, o);
      }
    }
  }
  return;
}

#endif