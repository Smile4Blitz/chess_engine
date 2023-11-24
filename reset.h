#ifndef RESET_H
#define RESET_H

#include "basic.h"

void set_piece(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE], int row, int col, Piece type, PieceColor color, int value);
void reset_board(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE]);

#endif // RESET_H
