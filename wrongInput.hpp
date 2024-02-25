#include <sstream>
#include <string>
class InvalidInput
{
public:
    InvalidInput();
    InvalidInput(int input);
    InvalidInput(const std::string& input);
    
    bool TitleInput();
    bool IntroInvalid();
    bool PlayInvalid();
    bool AnalyzeInvalid();

    void setInt(int _x);
    void setString(const std::string& _s);
private:
    int x;
    std::string s;
    std::stringstream stream;
};