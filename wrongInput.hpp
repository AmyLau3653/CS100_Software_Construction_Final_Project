#include <sstream>
#include <string>
class InvalidInput
{
public:
    InvalidInput() = default;
    
    int validateTitle();
    bool validateQuit();
    int validateHowToPlay();
    bool validateCharacterSelection();
    int validateRoomSize();
    int validateTurn();
    const std::string& validateMove();
    bool validateEncounter();

    void setInt(int _x);
    void setString(const std::string& _s);
private:
    int x;
    std::string s;
};