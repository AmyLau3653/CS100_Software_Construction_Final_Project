#include <iostream>

using namespace std;

int main() {
    char userInput;
    bool isRunning = true;

    while (isRunning) {
        cout << "Welcome to the Square Maze!\n";
        cout << "Press q to quit.\n";

        if (cin >> userInput) {
            if (userInput == 'q' || userInput == 'Q') {
                isRunning = false;
                cout << "\nExiting the game...\n";
            } 
            else {
                cout << "You pressed: " << userInput << "\n\n";
            }
        }
        
        cin.clear();
    }

    return 0;
}