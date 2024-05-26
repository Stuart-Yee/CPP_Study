#include <iostream>

int main() {

    enum pieces {
        whitePawn = 1,
        whiteRook,
        whiteKnight,
        whiteBishop,
        whiteKing,
        whiteQueen,
        blackPawn,
        blackRook,
        blackKnight,
        blackBishop,
        blackKing,
        blackQueen
    };

    int board[8][8] {{0}};
    board[0][0] = blackRook;
    board[0][1] = blackKnight;
    board[0][2] = blackBishop;
    board[0][3] = blackKing;
    board[0][4] = blackQueen;
    board[0][5] = blackRook;
    board[0][6] = blackKnight;
    board[0][7] = blackBishop;
    board[1][0] = blackPawn;
    board[1][1] = blackPawn;

    // And so on...

    std::cout << board[0][0];

    return 0;
}