#ifndef PRINTBOARD_H
#define PRINTBOARD_H

#include <cstddef>
#include <iostream>
#include "basic.h"

#define STRINGIFY(x) #x

void print_board(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE], int format = 0);
const char *pieceToString(Piece piece);
const char *colorToString(PieceColor color);

#endif // PRINTBOARD_H
