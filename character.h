#include <iostream>
#include <string>

#pragma once

using namespace std;

class Character {
    protected:
        string name;
        int health;
        int attack;

    public:
        Character(string n , int h, int a);
        virtual ~Character();
        void displayStats();
};

class Scout : public Character {
public:
    Scout();
};

class Soldier : public Character {
public:
    Soldier();
};

class Heavy : public Character {
public:
    Heavy();
};