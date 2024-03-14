#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include "header/room.h"
#include "header/Player.h"
#include "header/Type_A.h"
#include "header/Type_B.h"
#include "header/Type_C.h"
#include "header/gameplay.h"
#include "header/Output.h"
#include "header/wrongInput.hpp"

#include "header/Output.h"
#include "header/wrongInput.hpp"

using namespace std;

vector<Room> MapGenerator(const int& n) {
  int n_squared = pow(n, 2);
  vector<Room> map;
  
  srand(time(0));

  int exit = rand() % n_squared;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int ID = ((i * n) + (j % n)) + 1;
      // cout << ID << ": " << j + 1 << " , " << i + 1 << endl;
      Room currRoom = Room(ID, j + 1, i + 1);
      if (ID == exit && n >= 4) {
        currRoom.setExit();
        // cout << "Room " << ID << " is the exit!" << endl; //take out later
      }
      map.push_back(currRoom);
    }
  }
  return map;
}

void GameSequence(Player* p1, Player* p2, vector<Room>& map, const int _X, const int _Y) {
  Output output;
  int n = sqrt(map.size());
  int numTurns = 0;
  while(p1->isAlive() && p2->isAlive()) {
    Player *currPlayer, *oppPlayer;
    if (numTurns % 2 == 0) {
      currPlayer = p1;
      oppPlayer = p2;
    }
    else {
      oppPlayer = p1;
      currPlayer = p2;
    }
    int Playerphase = (numTurns + 2) / 2;

    int currX = currPlayer->getX();
    int currY = currPlayer->getY();
    int oppX = oppPlayer->getX();
    int oppY = oppPlayer->getY();

    output.OutputPhase(currPlayer, Playerphase);

    Room currRoom = currPlayer->searchRoom(map, currX, currY);
    // cout << currPlayer->getName() << " currently in room " << currRoom.getID() << endl; //for testing purposes only
    
    if (currPlayer->isClose(oppX, oppY)) {
      output.OutputEnemyClose(oppPlayer->getName());
    }

    if (currPlayer->isClose(_X, _Y)) {
      output.OutputExitClose();
    } //exit is close by clue

    int m = 3;
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      m = 4;
      output.OutputEncounter(currPlayer, oppPlayer);
    }

    output.OutputChoice();
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      output.OutputChoiceAttack();
    }
    cout << endl;

    int decision;
    InvalidInput i;
    if(m == 3) {
      decision = i.validateTurn();
    }
    else {
      decision = i.validateNumInputRange(1, 4);
    }

    bool analysis = false;
    if (decision == 3) {
      analysis = true;
        analyze(currPlayer, oppPlayer);
        output.OutputChoiceMoveStay();
        bool conflict = currRoom.conflict(currX, currY, oppX, oppY);
        if (conflict) {
          output.OutputChoiceThreeOptions();
        }
        cout << endl;
        //////////
        if(!conflict) {
          decision = i.validateNumInputRange(1, 2);
        }
        else {
          decision = i.validateNumInputRange(1, 3);

        }
    }

    if (decision == 1) {
      move(currPlayer, oppPlayer, currRoom, n, map);
    } //analyze
    if (decision == 4 || 
      (analysis == true && decision == 3)) {
      currPlayer->attack(oppPlayer);
    } //fight
    
    numTurns++;
  }
  return;
}

void runGame() {
  Output output;
  InvalidInput i;
  output.OutputMenu();

  int choice;
  choice = i.validateHowToPlay();

  if (choice == 0) {
    return;
  }
  if (choice == 2) {
    output.OutputHowToPlay();
    choice = i.validateTitle();
  }

  output.OutputChooseMapSize();
 
  int n;
  n = i.validateRoomSize();
  

  vector<Room> map = MapGenerator(n);
  int exitX, exitY;

  for (int i = 0; i < map.size(); ++i) {
    if (map[i].Exodus()) {
      exitX = map[i].getX();
      exitY = map[i].getY();
      break;
    }
  }
  Player* P1;
  Player* P2;

  int x1 = (rand() % n) + 1;
  int y1 = (rand() % n) + 1;
  int x2 = (rand() % n) + 1;
  int y2 = (rand() % n) + 1;

  string p1Name, p2Name;
  output.OutputChoosePlayerName(1);
  p1Name = i.SetName();
  
  output.OutputChoosePlayerName(2);
  p2Name = i.SetName();

  output.OutputGameSetup(p1Name);

  string p1Type;
  p1Type = i.validateCharacterSelection();
  
  if (p1Type == "a") {
    P1 = new TypeA(p1Name, BASEHP0, BASEATK0, x1, y1);
  }
  else if (p1Type == "b") {
    P1 = new TypeB(p1Name, BASEHP1, BASEATK1, x1, y1);
  }
  else { //p1Type == "c"
    P1 = new TypeC(p1Name, BASEHP2, BASEATK2, x1, y1);
  }

  output.OutputGameSetup(p2Name);
  string p2Type;
  p2Type = i.validateCharacterSelection();

  if (p2Type == "a") {
    P2 = new TypeA(p2Name, BASEHP0, BASEATK0, x2, y2);
  }
  else if (p2Type == "b") {
    P2 = new TypeB(p2Name, BASEHP1, BASEATK1, x2, y2);
  }
  else { //p2Type == "c"
    P2 = new TypeC(p2Name, BASEHP2, BASEATK2, x2, y2);
  }

  GameSequence(P1, P2, map, exitX, exitY);
  
  delete P1;
  delete P2; //no mem leaks
  return;
}

int main() {
  runGame();
  return 0;
}