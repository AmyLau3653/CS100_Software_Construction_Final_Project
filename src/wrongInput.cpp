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

const std::string& InvalidInput::validateCharacterSelection() {
    bool valid = false;

    while(!valid) {
        std::cin >> strInput;
        if (strInput == "a" || strInput == "b" || strInput == "c") {
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
    return validateNumInputRange(1, 4);
}

int InvalidInput::validateNoConflict() {
    return validateNumInputRange(1, 2);
}
const std::string& InvalidInput::validateMove(int currX, int currY, int n) {
    std::cin >> strInput;
    while (!((strInput == "w" && currY != 1) ||
        (strInput == "a" && currX != 1) ||
        (strInput == "s" && currY != n) ||
        (strInput == "d" && currX != n))) {
        std::cout << "Error. Please choose a valid input: ";
        std::cin >> strInput;
  } 
    return strInput;
}

std::string InvalidInput::SetName() {
    std::string name;
    std::cin >>  name;
    return name;
}
