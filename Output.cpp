#include <iostream>
#include <string>
#include "Output.h"

using namespace std;


void Output::OutputColor(int emphasis, int color, string text) {
  cout << "\033[" + to_string(emphasis) + ";" + to_string(color) + "m" + text + "\033[0m";
}

void Output::OutputDeath(Player* player) {
  //output in italicized red
  OutputColor(3, 31, player->getName() + " has died!");
}

void Output::OutputEncounter(Player* player1, Player* player2) {
  cout << player1->getName() << " has encountered " << player2->getName()
       << "! What will " << player1->getName() << " do?\n";
  //cout << player1->getName() << ", Turn FIX/n" /*<< player1->getNumMoves() << ":\n"*/;
  //cout << "Move (1)   Stay (2)   Analyze (3)   Attack (4)" << endl;
}

void Output::OutputChoice() {
  cout << "Move (1)\t Stay (2)\t Analyze (3)";
}

void Output::OutputChoiceMoveStay() {
  cout << "Move (1)\t Stay (2)";
}

void Output::OutputChoiceThreeOptions() {
  cout << "\t Attack (3)" << endl;
}

void Output::OutputGameSetup(const string& pName) {
  cout << pName << ", choose your player type:\n" <<
    "\t - Type A (press 'a')\n" <<
    "\t - Type B (press 'b')\n" << 
    "\t - Type C (press 'c')\n";
}

void Output::OutputMove() {
  cout << "Up     -     \'w\'\n";
  cout << "Left   -     \'a\'\n";
  cout << "Down   -     \'s\'\n";
  cout << "Right  -     \'d\'\n";
  cout << "Cancel -     \'c\'" << endl;
}

void Output::OutputLevelUpPlayer(Player* player) {
  //output in cyan/light blue
  OutputColor(0, 36, "Level up! " + player->getName() + " is now level " + to_string(player->getIntLevel()) + ".");
}

void Output::OutputAnalyze(Player* currPlayer, Player* oppPlayer) {
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

void Output::OutputEscapeWin(Player* player) {
  cout << player->getName() << " has escaped!" << endl
    << player->getName() << " wins!" << endl;
}

void Output::OutputMenu() {
  cout << "=========Escape the Square Maze=========\n";
  // output in red
  OutputColor(0, 31, "Quit  (0)\n");
  // output in green
  OutputColor(0, 32, "Play (1)\n");
  // output in yellow
  OutputColor(0, 33, "How to Play (2)\n");
}

void Output::OutputPlay() {
  //output in red
  OutputColor(0, 31, "Quit Game (0)     ");
  //output in green
  OutputColor(0, 32, "Play Game (1)     ");
  //output in yellow
  OutputColor(0, 33, "Back to Main Menu (2)\n");
}

void Output::OutputHowToPlay() {
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
}

void Output::OutputExitRoom(Player* player) {
  cout << player->getName() << " has found the exit!\n";
  // output in italicized green
  OutputColor(3, 32, player->getName() + " wins!");
}

void Output::OutputFight(Player* player1, Player* player2) {
  cout << player1->getName() << " does " << /*player1->GetDamage() << */" attack to "
       << player2->getName() << "!" << endl;
}

void Output::OutputPhase(Player* p, int PlayerPhase) {
  cout << p->getName() << ", Phase " 
      << PlayerPhase << endl;
}

void Output::OutputChoiceAttack() {
  cout << "\t Attack (4)";
}

void Output::OutputChooseMapSize() {
  cout << "========= Play =========" << endl;
  cout << "Enter a number between 4 and 13: ";
}

void Output::OutputChoosePlayerName(int playerNum) {
  cout << "Enter Player " << playerNum << "'s name: ";
}

void Output::OutputDirectionChoice(int currY, int currX, int n) {
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
}

void Output::OutputNewLine() {
  cout << endl;
}

void Output::OutputConflict(Player* currPlayer, Player* oppPlayer) {
      cout << "Fight (1) \tStay (2) \tAnalyze (3)" << endl;
}