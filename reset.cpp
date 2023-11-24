#include "reset.h"

void set_piece(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE], int row, int col, Piece type, PieceColor color, int value)
{
    board[row][col] = ChessPiece{type, color, value};
}

void reset_board(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE])
{
    // WHITE PIECES
    set_piece(board, 0, 0, Piece::ROOK, PieceColor::WHITE, 5);
    set_piece(board, 0, BOARD_SIZE - 1, Piece::ROOK, PieceColor::WHITE, 5);

    set_piece(board, 0, 1, Piece::KNIGHT, PieceColor::WHITE, 3);
    set_piece(board, 0, BOARD_SIZE - 2, Piece::KNIGHT, PieceColor::WHITE, 3);

    set_piece(board, 0, 2, Piece::BISHOP, PieceColor::WHITE, 3);
    set_piece(board, 0, BOARD_SIZE - 3, Piece::BISHOP, PieceColor::WHITE, 3);

    set_piece(board, 0, 3, Piece::QUEEN, PieceColor::WHITE, 9);
    set_piece(board, 0, 4, Piece::KING, PieceColor::WHITE, 10);

    // WHITE PAWNS
    for (int col = 0; col < BOARD_SIZE; col++)
    {
        set_piece(board, 1, col, Piece::PAWN, PieceColor::WHITE, 1);
    }

    // MIDDLE
    ChessPiece empty_space = {Piece::EMPTY, PieceColor::GREY, 0};
    for (int row = 2; row < (BOARD_SIZE - 2); row++)
    {
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            set_piece(board, row, col, Piece::EMPTY, PieceColor::GREY, 0);
        }
    }

    // BLACK PAWNS
    for (int col = 0; col < BOARD_SIZE; col++)
    {
        set_piece(board, 6, col, Piece::PAWN, PieceColor::BLACK, 1);
    }

    // BLACK PIECES
    set_piece(board, 7, 0, Piece::ROOK, PieceColor::BLACK, 5);
    set_piece(board, 7, BOARD_SIZE - 1, Piece::ROOK, PieceColor::BLACK, 5);

    set_piece(board, 7, 1, Piece::KNIGHT, PieceColor::BLACK, 3);
    set_piece(board, 7, BOARD_SIZE - 2, Piece::KNIGHT, PieceColor::BLACK, 3);

    set_piece(board, 7, 2, Piece::BISHOP, PieceColor::BLACK, 3);
    set_piece(board, 7, BOARD_SIZE - 3, Piece::BISHOP, PieceColor::BLACK, 3);

    set_piece(board, 7, 3, Piece::QUEEN, PieceColor::BLACK, 9);
    set_piece(board, 7, 4, Piece::KING, PieceColor::BLACK, 10);
}
