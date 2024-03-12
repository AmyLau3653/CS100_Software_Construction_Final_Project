#include <iostream>
#include <limits>
#include "wrongInput.hpp"

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
    std::cin >> strInput;
    if (strInput.compare("q")) {
        return true;
    }
    return false;
}

int InvalidInput::validateHowToPlay() {
    return validateNumInputRange(0, 2);
}

const std::string InvalidInput::validateCharacterSelection() {
    bool valid = false;

    while(!valid) {
        std::cin >> strInput;
        if (strInput == "a" || strInput == "b" || strInput == "c") {
            valid = true;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
        }

    }
    return strInput;
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

const std::string InvalidInput::validateMove() {
    std::string input;
    bool valid = false;

    while(!valid) {
        std::cin >> input;
        if (input == "w" || input == "a" || input == "s" || input == "d" || input == "c") {
            valid = true;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
        }

    }
    return input;
}

