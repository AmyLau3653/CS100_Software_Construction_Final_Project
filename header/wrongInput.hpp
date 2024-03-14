#include <sstream>
#include <string>
#include "../header/Player.h"

#ifndef __INVALIDINPUT_HPP__
#define __INVALIDINPUT_HPP__

class InvalidInput
{
public:
    InvalidInput() = default;
    
    int validateNumInputRange(int minNum, int maxNum);

    int validateTitle();
    bool validateQuit();
    int validateHowToPlay();
    const string validateCharacterSelection();
    int validateRoomSize();
    int validateTurn();
    const string validateMove(Player*, const int);
    bool validateEncounter();
private:
    int numInput;
    string strInput;
};

#endif