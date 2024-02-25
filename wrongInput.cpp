#include <iostream>
#include <limits>
#include <vector>
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


int InvalidInput::TitleInput()
{
    bool isValid = false;
    while (!isValid) {
        std::cin >> x;
        if(std::cin.fail() || (x < 0 || x > 3)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid" << std::endl;
        }
        else {
            isValid = true;
        }
    }  
    return x;
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