#include <iostream>

#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include "room.h"
#include "Player.h"
#include "Type_A.h"
#include "Type_B.h"
#include "Type_C.h"
#include "gameplay.h"
#include "Output.h"
using namespace std;

vector<Room> MapGenerator(const int& n) {
  int n_squared = pow(n, 2);
  vector<Room> map;
  
  srand(time(0));

  int exit = rand() % n_squared;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int ID = ((i * n) + (j % n)) + 1;
      cout << ID << ": " << j + 1 << " , " << i + 1 << endl;
      Room currRoom = Room(ID, j + 1, i + 1);
      if (ID == exit && n >= 4) {
        currRoom.setExit();
        cout << "Room " << ID << " is the exit!" << endl; //take out later
      }
      map.push_back(currRoom);
    }
  }
  return map;
}

void GameSequence(Player* p1, Player* p2, vector<Room>& map) {
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
    cout << currPlayer->getName() << ", Phase " 
      << Playerphase << endl;
    Room currRoom = currPlayer->searchRoom(map, currX, currY);

    cout << currPlayer->getName() << " currently in room " << currRoom.getID() << endl; //for testing purposes only
    


    int m = 3;
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      m = 4;
      cout << currPlayer->getName() << " has encountered " << 
        oppPlayer->getName() << "! What will " << 
        currPlayer->getName() << " do?" << endl;
    }
    cout << "Move (1)\t Stay (2)\t Analyze (3)";
    if (currRoom.conflict(currX, currY, oppX, oppY)) {
      cout << "\t Attack (4)";
    }
    cout << endl;
    int decision;
    cin >> decision;

    
    while (decision < 1 && decision > m) { //check for bad input
      cout << "Error, please enter a valid input:\n" <<
        "Move (1)\t Stay (2)\t Analyze (3)";
      if (m == 4) {
        cout << "\t Attack (4)";
      }
    }
    bool analysis = false;

    if (decision == 3) {
      analysis = true;
        analyze(currPlayer, oppPlayer);
        cout << "Move (1)\t Stay (2)";
        if (currRoom.conflict(currX, currY, oppX, oppY)) {
          cout << "\t Attack (3)" << endl;
        }
        cout << endl;
        cin >> decision;
      while (decision < 1 || decision > 3) {
        cout << "Error, please enter a valid input: ";
        cin >> decision;
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
  cout << "========= The Square Maze =========" << endl;
  cout << "Quit (0)\nPlay (1)\nHow To Play (2)\n";
  char choice;
  cin >> choice;
  while (!(choice == '0' || choice == '1' || choice == '2')) {
    cout << "Error! Invalid input. Please try again." << endl;
    cout << "========= The Square Maze =========" << endl;
    cout << "Quit (0)\nPlay (1)\nHow To Play (2)\n";
    cin >> choice;
  }

  if (choice == '0') {
    return;
  }
  if (choice == '2') {
    cout << "========= How to Play =========" << endl;
    cout << 
      "1. Pick a number between 4 and 13 to decide the size\
      of the maze." << endl <<
      "2. Put in names for Player 1 and Player 2. Then\
      select your player type." << endl <<
      "\t - Type A has normal stats (5 health, 5 attack)" 
      << endl << 
      "\t - Type B has higher HP but lower attack (6 health, 4 attack)" << endl <<
      "\t - Type C has higher attack but lower HP (4 health, 6 attack)" << endl <<
      "3. There are two ways to win:\n" <<
      "\t - Find the escape room first\n" <<
      "\t - Kill the other player first\n" << 
      "4. You can level up and increase your stats whenever you move 2 rooms, so keep moving! However, you will not know where you are in the map, but you can use clues based on wherever you end up.\n\n" <<
      "Quit Game (0)\t\t Play Game (1)" << endl;
    cin.clear();
    while (choice != '1' && choice != '0') {
      cin >> choice;
    }
    if (choice == '0') {
      return;
    }
  }

  cout << "========= Play =========" << endl;
  cout << "Enter a number between 4 and 13: ";
  int n;
  cin >> n;
  while (n < 4 || n > 13) {
    cout << "Error! Please input a number between 4 and 13: ";
    cin >> n;
  }

  vector<Room> map = MapGenerator(n);
  Player* P1;
  Player* P2;

  int x1 = (rand() % n) + 1;
  int y1 = (rand() % n) + 1;
  int x2 = (rand() % n) + 1;
  int y2 = (rand() % n) + 1;

  string p1Name, p2Name;
  cout << "Enter Player 1's name: ";
  cin >> p1Name;
  cout << "Enter Player 2's name: ";
  cin >> p2Name;

  cout << p1Name << ", choose your player type:\n" <<
    "\t - Type A (press 'a')\n" <<
    "\t - Type B (press 'b')\n" << 
    "\t - Type C (press 'c')\n";

  char p1Type;
  cin >> p1Type;
  while (p1Type != 'a' && p1Type != 'b' && p1Type != 'c') {
    cout << "Error! Please choose a valid player type:\n";
    cin >> p1Type;
  }

  
  if (p1Type == 'a') {
    P1 = new TypeA(p1Name, BASEHP0, BASEATK0, x1, y1);
  }
  else if (p1Type == 'b') {
    P1 = new TypeB(p1Name, BASEHP1, BASEATK1, x1, y1);
  }
  else {
    P1 = new TypeC(p1Name, BASEHP2, BASEATK2, x1, y1);
  }

  cout << p2Name << ", choose your player type:\n" <<
    "\t - Type A (press 'a')\n" <<
    "\t - Type B (press 'b')\n" << 
    "\t - Type C (press 'c')\n";

  char p2Type;
  cin >> p2Type;
  while (p2Type != 'a' && p2Type != 'b' && p2Type != 'c') {
    cout << "Error! Please choose a valid player type:\n";
    cin >> p2Type;
  }

  if (p2Type == 'a') {
    P2 = new TypeA(p2Name, BASEHP0, BASEATK0, x2, y2);
  }
  else if (p2Type == 'b') {
    P2 = new TypeB(p2Name, BASEHP1, BASEATK1, x2, y2);
  }
  else {
    P2 = new TypeC(p2Name, BASEHP2, BASEATK2, x2, y2);
  }

  P1->getPosition();
  P2->getPosition(); //take these two out later; these are for testing only

  GameSequence(P1, P2, map);
  return;
}

int main() {
  //setupGame();
  runGame();
  return 0;
}