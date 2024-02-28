#include <sstream>
#include <string>

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