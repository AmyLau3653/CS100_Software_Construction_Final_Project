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
    const std::string validateCharacterSelection();
    int validateRoomSize();
    int validateTurn();
    const std::string validateMove();
    bool validateEncounter();
private:
    int numInput;
    std::string strInput;
};

#endif