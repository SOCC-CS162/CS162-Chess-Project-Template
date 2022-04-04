#ifndef CHESS_H
#define CHESS_H

#include "Square.h"

class Chess
{
  public:
  
  // Data fields
  static Square chessboard[8][8]; // chessboard[rank][file]
  
  // Functions
  static void createBoard();
  static void printBoard();
};

#endif
