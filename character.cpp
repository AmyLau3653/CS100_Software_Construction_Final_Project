#include <iostream>
#include "character.h"

using namespace std;

Character::Character(std::string n, int h, int a) : name(n), health(h), attack(a) {}

Character::~Character() {}

void Character::displayStats() {
    
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
}

Scout::Scout() : Character("Scout", 4, 6) {}

Soldier::Soldier() : Character("Soldier", 5, 5) {}

Heavy::Heavy() : Character("Heavy", 6, 4) {}