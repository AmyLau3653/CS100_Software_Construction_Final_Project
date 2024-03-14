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
            std::cout << "Error: invalid Input" << std::endl;
        }
        else {
            isValid = true;
        }
    }  
    return numInput;
}
int InvalidInput::validateTitle() {
    return validateNumInputRange(0, 3);
}

bool InvalidInput::validateQuit() {
    std::cin >> charInput;
    if (charInput == 'q') {
        return true;
    }
    return false;
}

int InvalidInput::validateHowToPlay() {
    return validateNumInputRange(0, 2);
}

const char InvalidInput::validateCharacterSelection() {
    bool valid = false;

    while(!valid) {
        std::cin >> charInput;
        if (charInput == 'a'|| charInput == 'b' || charInput == 'c') {
            valid = true;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
        }

    }
    return charInput;
}

int InvalidInput::validateRoomSize() {
    return validateNumInputRange(4, 13);
}

int InvalidInput::validateTurn() {
    return validateNumInputRange(0, 3);
}

bool InvalidInput::validateEncounter() {
    return validateNumInputRange(0, 4);
}

const char InvalidInput::validateMove(Player *currPlayer, const int n) {
    char input;
    bool valid = false;
    int xPos = currPlayer->getX();
    int yPos = currPlayer->getY();

    while(!valid) {
        std::cin >> input;
        if ((input == 'w' && yPos != 1) || (input == 'a' && xPos != 1) 
        || (input == 's' && yPos != n) || (input == 'd' && xPos != n) 
        /*|| (input == 'c')*/) {
            valid = true;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
        }

    }
    return input;
}

