#include <iostream>
#include <iomanip>

#include "basic.h"
#include "reset.cpp"
#include "printboard.cpp"

void reset_board(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE]);

int main()
{
    // Chess board
    ChessPiece board[BOARD_SIZE][BOARD_SIZE];
    
    // Set board
    reset_board(board);
    
    // print board
    print_board(board,2);

    return 0;
}

