#include <iostream>
#include <string>
#include <vector>

void putPiece(std::vector<std::vector<char>>& board, std::string& piece, int color) {
    char pieceType;
    int row, col;
    if (piece.length() == 3) {
        pieceType = piece[0];
        col = piece[1] - 'a';
        row = 7 - (piece[2] - '1');
    } else {
        pieceType = 'P';
        col = piece[0] - 'a';
        row = 7 - (piece[1] - '1');
    }

    if (color == 1) {
        pieceType = tolower(pieceType);
    }

    board[row][col] = pieceType;
}

int main() {
    std::string white, black;
    std::getline(std::cin, white);
    std::getline(std::cin, black);

    std::string piece;
    std::string delim = ",";

    std::vector<std::vector<char>> board(8, std::vector<char>(8));
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if ((i+j) % 2 == 0) {
                board[i][j] = '.';
            } else {
                board[i][j] = ':';
            }
        }
    }

    size_t start = 0, next = 0;

    if (white.length() > 7) {
        next = white.find(" ");
        start = next + 1;
        while ((next = white.find(delim, start)) != std::string::npos) {
            piece = white.substr(start, next-start);
            putPiece(board, piece, 0);
            start = next + 1;
        }
        piece = white.substr(start);
        putPiece(board, piece, 0);
    }
    

    if (black.length() > 7) {
        next = black.find(" ");
        start = next + 1;
        while ((next = black.find(delim, start)) != std::string::npos) {
            piece = black.substr(start, next-start);
            putPiece(board, piece, 1);
            start = next + 1;
        }
        piece = black.substr(start);
        putPiece(board, piece, 1);
    }
        
    int row = 0;
    char square;
    for (int i=0; i<17; i++) {
        if (i % 2 == 0) {
            std::cout << "+---+---+---+---+---+---+---+---+" << std::endl;
        } else {
            std::cout << "|";
            for (int col=0; col<8; col++) {
                if ((row+col) % 2 == 0) {
                    square = '.';
                } else {
                    square = ':';
                }
                std::cout << square << board[row][col] << square << "|";
            }
            std::cout << std::endl;
            row++;
        }
    }

    return 0;
}