#include <iostream>
#include <limits>
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


int InvalidInput::validateTitle()
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

bool InvalidInput::validateQuit() {
    std::cin >> s;
    if (s.compare("q")) {
        return true;
    }
    return false;
}

int InvalidInput::validateHowToPlay()
{
    bool isValid = false;
    while (!isValid) {
        std::cin >> x;
        if(std::cin.fail() || (x < 0 || x > 2)) {
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

bool InvalidInput::validateIntro()
{
    return true;
}

bool InvalidInput::validateCharacterSelection()
{
    return true;
}

int InvalidInput::validateTurn() {
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
}

bool InvalidInput::validateEncounter()
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
    i.validateTitle();
    return 0;
}