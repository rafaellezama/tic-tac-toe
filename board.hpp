#pragma once
#include <array>

class Board
{
private:
  int squares[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

public:
  void clear();
  void move(int i, char m);
  char get_input(int i);
};