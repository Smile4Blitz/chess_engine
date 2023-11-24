// basic.h
#ifndef BASIC_H
#define BASIC_H

#include <cstddef>

const size_t BOARD_SIZE = 8;

enum class Piece
{
    EMPTY,
    PAWN,
    KING,
    QUEEN,
    BISHOP,
    KNIGHT,
    ROOK
};

enum class PieceColor
{
    GREY,
    WHITE,
    BLACK
};

struct ChessPiece
{
    Piece type;
    PieceColor color;
    int value;
};

#endif // BASIC_H
