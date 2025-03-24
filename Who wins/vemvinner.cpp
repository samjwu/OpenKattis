#include <iostream>
#include <vector>

char checkWinner(std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != '_' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
        if (board[0][i] != '_' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }
    
    if (board[0][0] != '_' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != '_' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }
    
    return '_';
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> board[i][j];
        }
    }

    char winner = checkWinner(board);

    if (winner == 'X') {
        std::cout << "Johan";
    } else if (winner == 'O') {
        std::cout << "Abdullah";
    } else {
        std::cout << "ingen";
    }

    std::cout << " har vunnit";
}
