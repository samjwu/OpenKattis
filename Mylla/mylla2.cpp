#include <iostream>
#include <string>
#include <vector>

char findWinner(std::vector<std::string> board) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '_') {
            return board[i][0];
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '_') {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '_') {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '_') {
        return board[0][2];
    }

    return '_';
}

int main() {
    std::string s;
    std::vector<std::string> board;

    for (int i = 0; i < 3; i++) {
        std::cin >> s;
        board.push_back(s);
    }

    char winner = findWinner(board);

    if (winner == 'O') {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
