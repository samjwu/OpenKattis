#include <iostream>
#include <string>
#include <vector>

bool attackKnight(int x, int y, std::vector<std::vector<char>>& board, std::vector<std::vector<int>>& moves) {
    if (board[x][y] == '.') {
        return false;
    }

    for (auto move: moves) {
        int nextX = x + move[0];
        int nextY = y + move[1];
        if (nextX >= 0 && nextX < 5 && nextY >= 0 && nextY < 5 && board[nextX][nextY] == 'k') {
            return true;
        }
    }   

    return false;
}

int main() {
    std::vector<std::vector<int>> moves = {
        {-1, 2}, {1, 2},
        {-1, -2}, {1, -2},
        {2, 1}, {2, -1},
        {-2, 1}, {2, -1},
    };
    std::vector<std::vector<char>> board(5, std::vector<char>(5));
    std::string line;

    int countKnights = 0;
    for (int i=0; i<5; i++) {
        std::cin >> line;
        for (int j=0; j<5; j++) {
            board[i][j] = line[j];
            if (board[i][j] == 'k') {
                countKnights++;
            }
        }
    }

    if (countKnights != 9) {
        std::cout << "invalid";
        return 0;
    }

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (attackKnight(i, j, board, moves)) {
                std::cout << "invalid";
                return 0;
            }
        }
    } 

    std::cout << "valid";
}