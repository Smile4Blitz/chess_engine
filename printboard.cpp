#include "printboard.h"

void print_board(ChessPiece (&board)[BOARD_SIZE][BOARD_SIZE], int format)
{
    if (format == 0)
    {
        for (int ROW = 0; ROW < BOARD_SIZE; ROW++)
        {
            for (int COLUMN = 0; COLUMN < BOARD_SIZE; COLUMN++)
            {
                std::cout << std::left << std::setw(2) << (board[ROW][COLUMN].value) << " ";
            }
            std::cout << "\n";
        }
    }

    if (format == 1)
    {
        for (int ROW = 0; ROW < BOARD_SIZE; ROW++)
        {
            for (int COLUMN = 0; COLUMN < BOARD_SIZE; COLUMN++)
            {
                std::cout << std::left << std::setw(6) << pieceToString(board[ROW][COLUMN].type) << " ";
            }
            std::cout << "\n";
        }
    }

    if (format == 2)
    {
        for (int ROW = 0; ROW < BOARD_SIZE; ROW++)
        {
            for (int COLUMN = 0; COLUMN < BOARD_SIZE; COLUMN++)
            {
                std::cout << std::left << std::setw(6) << colorToString(board[ROW][COLUMN].color) << " ";
            }
            std::cout << "\n";
        }
    }
}

const char *pieceToString(Piece piece)
{
    const char *pieceStrings[] =
        {
            STRINGIFY(EMPTY),
            STRINGIFY(PAWN),
            STRINGIFY(KING),
            STRINGIFY(QUEEN),
            STRINGIFY(BISHOP),
            STRINGIFY(KNIGHT),
            STRINGIFY(ROOK)};

    return pieceStrings[static_cast<int>(piece)];
}

const char *colorToString(PieceColor color)
{
    const char *colorStrings[] =
        {
            STRINGIFY(GREY),
            STRINGIFY(WHITE),
            STRINGIFY(BLACK)};

    return colorStrings[static_cast<int>(color)];
}
