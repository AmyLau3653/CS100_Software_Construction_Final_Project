#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "../header/Player.h"
#include "../header/room.h"
#include "../header/Output.h"
#include "../header/wrongInput.hpp"
#include <iostream>
using namespace std;



void analyze(Player *currPlayer, Player *oppPlayer) {
  Output output;
  output.OutputAnalyze(currPlayer);
  cout << endl;
  output.OutputAnalyze(oppPlayer);
}

void move(Player *currPlayer, Player *oppPlayer, Room currRoom, int n, vector<Room> map) {
  Output output;
  InvalidInput invalid;
  string direction;
  int currY = currPlayer->getY();
  int currX = currPlayer->getX();
  int oppX = oppPlayer->getX();
  int oppY = oppPlayer->getY();
  if (currY != 1) {
    cout << "Up - 'w'" << endl;
  }
  if (currX != 1) {
    cout << "Left - 'a'" << endl;
  }
  if (currY != n) {
    cout << "Down - 's'" << endl;
  }
  if (currX != n) {
    cout << "Right - 'd'" << endl;
  }
  cout << "Enter a direction to move in: ";
  direction = invalid.validateMove(currPlayer, n);
  
  currPlayer->moveSpace(direction);

  currRoom =
      currPlayer->searchRoom(map, currPlayer->getX(), currPlayer->getY());

  if (currPlayer->getSpacesMoved() % 2 == 0) {
    currPlayer->levelUp();
  }
  if (currRoom.Exodus()) {
    output.OutputExitRoom(currPlayer);
    exit(0);
  }
  if (currRoom.conflict(currX, currY, oppX, oppY)) {
    output.OutputEncounter(currPlayer, oppPlayer);

    output.OutputChoice();
    int choice;

    choice = invalid.validateNumInputRange(1, 3);

    if (choice == 1) {
      currPlayer->attack(oppPlayer);
    } else if (choice == 3) {
      analyze(currPlayer, oppPlayer);
    }
  }
  return;
}

#endif