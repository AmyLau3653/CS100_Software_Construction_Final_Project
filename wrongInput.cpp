#include <iostream>
#include "wrongInput.hpp"

InvalidInput::InvalidInput()
{

}

InvalidInput::InvalidInput(int input)
{
    stream << input;
}

InvalidInput::InvalidInput(const std::string& input)
{
    stream << input;
}


bool InvalidInput::TitleInput()
{
    if(0 <= x && x <= 3) {
        std::cout << "input valid" << std::endl;
        return false;
    }
    else {
        std::cout << "input invalid" << std::endl;
        return true;
    }
}

bool InvalidInput::IntroInvalid()
{
    return true;
}

bool InvalidInput::PlayInvalid()
{
    return true;
}

bool InvalidInput::AnalyzeInvalid()
{
    return true;
}

void InvalidInput::setInt(int _x)
{
    x = _x;
}
void InvalidInput::setString(const std::string& _s)
{
    s = _s;
}

int main() {
    InvalidInput i;
    i.setInt(3);
    i.TitleInput();
    return 0;
}