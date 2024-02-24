#include <string>

class InvalidInput
{
public:
    InvalidInput();
    InvalidInput(std::string strInput);
    InvalidInput(int intInput);

    bool TitleInput();
    bool IntroInvalid();
    bool PlayInvalid();
    bool AnalyzeInvalid();
private:
    std::string strInput;
    int intInput;
};