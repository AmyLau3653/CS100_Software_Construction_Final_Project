#include <sstream>
#include <string>

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
    const std::string& validateCharacterSelection();
    int validateRoomSize();
    int validateTurn();
    const std::string& validateMove(int currX, int currY, int n);
    bool validateEncounter();
    int validateNoConflict();
    std::string SetName();
private:
    int numInput;
    std::string strInput;
};

#endif