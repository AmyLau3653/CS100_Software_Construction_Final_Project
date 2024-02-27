#include <iostream>
#include "character.h"

using namespace std;

int main() {
    cout << "Select a character:" << endl;
    cout << "1. Scout" << endl;
    cout << "2. Soldier" << endl;
    cout << "3. Heavy" << endl;
    int choice;
    std::cin >> choice;

    Character* selectedCharacter = nullptr;

    switch (choice) {
        case 1:
            selectedCharacter = new Scout();
            break;
        case 2:
            selectedCharacter = new Soldier();
            break;
        case 3:
            selectedCharacter = new Heavy();
            break;
        default:
            cout << "Invalid choice. Exiting..." << endl;
            return 1;
    }

    selectedCharacter->displayStats();

    delete selectedCharacter;

    return 0;
}