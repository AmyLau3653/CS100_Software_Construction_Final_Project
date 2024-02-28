#ifndef ROOM_H_
#define ROOM_H_

#include <vector>
using namespace std;

class Room {
public:
  Room(int id, int x, int y);
  // Room searchRoom(vector<Room>, int, int);
  void getPosition();
  int getID();
  void setExit();
  bool Exodus();
  bool conflict(int, int, int, int);
  int getX(), getY();

private:
  int id, x, y;
  bool isExit;
};

#endif