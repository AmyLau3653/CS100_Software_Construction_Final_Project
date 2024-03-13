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
  cout << player1->getName() << ", Turn FIX/n" /*<< player1->getNumMoves() << ":\n"*/;
  cout << "Move (1)   Stay (2)   Analyze (3)   Attack (4)" << endl;
}

void Output::OutputChoice() {
  cout << "Move (1)   Stay (2)   Analyze (3)" << endl;
}

void Output::OutputGameSetup() {
  cout << "Choose your player type:\n";
  cout << "   - Type A (press \'a\')\n";
  cout << "   - Type B (press \'b\')\n";
  cout << "   - Type C (press \'c\')\n";
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
  OutputColor(0, 36, player->getName() + " is now level " /*+ to_string(player->getLevel() + 1))*/);
}

void Output::OutputAnalyze(Player* player) {
  cout << player->getName() << ":\n";
  player->getLevel();
  player->getHealth();
  player->getAttack();
}

void Output::OutputWin(Player* player) {
  cout << player->getName() << " wins!" << endl;
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
  cout << "=========How To Play=========\n";
  cout << "1. Put in a number between 2-9. A square map will be generated "
          "based on the number you put in.\n";
  cout << "2. Put in names for Player 1 and Player 2. Then, select your player "
          "type.\n";
  cout << "   - Player Type A has normal stats (5 health, 5 attack)\n";
  cout << "   - Player Type B has higher HP but lower attack (6 health, 4 "
          "attack)\n";
  cout << "   - Player Type C has higher attack but lower HP (4 health, 6 "
          "attack)\n";
  cout << "3. There are two ways to win:\n";
  cout << "   - Find the escape room first (randomly placed, only available if "
          "you choose “4” or more in the beginning)\n";
  cout << "   - Kill the other player first\n";
  cout << "4. You can level up and increase your stats whenever you move 2 "
          "rooms. So keep moving! However, you will not know where you are in "
          "the map, but you can use clues based on wherever you end up.\n";
  cout << endl;
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
