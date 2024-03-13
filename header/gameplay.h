#include "../header/Player.h"
#include "../header/room.h"
#include <iostream>
using namespace std;

#ifndef GAMEPLAY_H
#define GAMEPLAY_H

void analyze(Player *currPlayer, Player *oppPlayer) {
  cout << currPlayer->getName() << ":" << endl;
  currPlayer->getLevel();
  currPlayer->getHealth();
  currPlayer->getAttack();

  cout << endl;

  cout << oppPlayer->getName() << ":" << endl;
  oppPlayer->getLevel();
  oppPlayer->getHealth();
  oppPlayer->getAttack();
}

void move(Player *currPlayer, Player *oppPlayer, Room currRoom, int n, vector<Room> map) {
  char direction;
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
  cout << "Cancel - 'c'" << endl << endl << "Enter a direction or cancel: ";
  cin >> direction;
  while (!((direction == 'w' && currY != 1) ||
           (direction == 'a' && currX != 1) ||
           (direction == 's' && currY != n) ||
           (direction == 'd' && currX != n) || direction == 'c')) {
    cout << "Error. Please choose a valid input: ";
    cin >> direction;
  }
  if (direction == 'c') {
    int m = 3;
    cout << "Move (1)\t Stay (2)\t Analyze (3)";
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      cout << "\t Attack (4)";
      m = 4;
    }
    cout << endl;
    int choice;
    cin >> choice;
    while (choice > m || choice < 1) {
      cout << "Error. Please choose a valid input: ";
      cin >> choice;
    }
    cout << "FIXME: Cancel option still in progress" << endl;
  } 
  else {
    currPlayer->moveSpace(direction);

    currRoom =
        currPlayer->searchRoom(map, currPlayer->getX(), currPlayer->getY());

    if (currPlayer->getSpacesMoved() % 2 == 0) {
      currPlayer->levelUp();
    }
    if (currRoom.Exodus()) {
      cout << currPlayer->getName() << " has escaped!" << endl
           << currPlayer->getName() << " wins!" << endl;
      exit(0);
    }
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      cout << currPlayer->getName() << " has encountered "
           << oppPlayer->getName() << "! What will " 
           << currPlayer->getName() << " do?" << endl;

      cout << "Fight (1) \tStay (2) \tAnalyze (3)" << endl;
      int choice;
      cin >> choice;

      while (choice > 3 || choice < 1) {
        cout << "Error. Please choose a valid input: ";
        cin >> choice;
      }

      if (choice == 1) {
        currPlayer->attack(oppPlayer);
      } else if (choice == 3) {
        analyze(currPlayer, oppPlayer);
      }
    }
  }
  return;
}

#endif