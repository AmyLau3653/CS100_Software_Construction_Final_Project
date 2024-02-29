#include "room.h"
#include <iostream>
#include <vector>
using namespace std;

Room::Room(int id, int x, int y) : id(id), x(x), y(y) {
  isExit = false;
}

int Room::getX() { return x; }

int Room::getY() { return y; }

int Room::getID() { return id; }


void Room::getPosition() { // for testing purposes only
  cout << "Current position: "
       << "(" << x << ", " << y << ")" << endl;
  return;
}

void Room::setExit() {
  isExit = true;
  return;
}





bool Room::Exodus() { return isExit; }

bool Room::conflict(int x1, int y1, int x2, int y2) { 
  return ((x1 == x2) && (y1 == y2));
}