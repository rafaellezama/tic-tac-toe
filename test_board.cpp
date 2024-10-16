#include <iostream>
#include <cassert>
#include "board.hpp"
using namespace std;

int main()
{
  Board board;
  board.move(1, 'X');
  assert(board.get_input(1) == 'X');
  cout << "All test have pass";
  return 0;
}