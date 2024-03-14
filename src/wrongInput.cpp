#include <iostream>
#include <limits>
#include "../header/wrongInput.hpp"

int InvalidInput::validateNumInputRange(int minNum, int maxNum) {
    bool isValid = false;
    while (!isValid) {
        std::cin >> numInput;
        if(std::cin.fail() || (numInput < minNum || numInput > maxNum)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error. Please choose a valid input: ";
        }
        else {
            isValid = true;
        }
    }  
    return numInput;
}
int InvalidInput::validateTitle() {
    return validateNumInputRange(0, 1);
}

bool InvalidInput::validateQuit() {
    std::cin >> strInput;
    if (strInput.compare("q")) {
        return true;
    }
    return false;
}

int InvalidInput::validateHowToPlay() {
    return validateNumInputRange(0, 2);
}

const string InvalidInput::validateCharacterSelection() {
    bool valid = false;

    while(!valid) {
        std::cin >> strInput;
        if (strInput == "a"|| strInput == "b" || strInput == "c") {
            valid = true;
        }
        else {
            std::cout << "Error. Please choose a valid input: ";
        }

    }
    return strInput;
}

int InvalidInput::validateRoomSize() {
    return validateNumInputRange(4, 13);
}

int InvalidInput::validateTurn() {
    return validateNumInputRange(1, 3);
}

int InvalidInput::validateEncounter() {
    return validateNumInputRange(0, 4);
}

const string InvalidInput::validateMove(Player *currPlayer, const int n) {
    string input;
    bool valid = false;
    int xPos = currPlayer->getX();
    int yPos = currPlayer->getY();

    while(!valid) {
        std::cin >> input;
        if ((input == "w" && yPos != 1) || (input == "a" && xPos != 1) 
        || (input == "s" && yPos != n) || (input == "d" && xPos != n) 
        /*|| (input == 'c')*/) {
            valid = true;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
        }

    }
    return input;
}

// std::string InvalidInput::SetName() {
//     std::string name;
//     std::cin >>  name;
//     return name;
// }
