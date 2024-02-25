#include <sstream>
#include <string>
class InvalidInput
{
public:
    InvalidInput();
    InvalidInput(int input);
    InvalidInput(const std::string& input);
    
    int validateTitle();
    bool validateQuit();
    int validateHowToPlay();
    bool validateIntro();
    bool validateCharacterSelection();
    int validateTurn();
    bool validateEncounter();

    void setInt(int _x);
    void setString(const std::string& _s);
private:
    int x;
    std::string s;
    std::stringstream stream;
};