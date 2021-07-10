#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::vector<char>> board(7, std::vector<char>(7, 'x'));

    std::string line;
    for (int i=0; i<7; i++) {
        std::cin >> line;

        if (i <= 1 || i >= 5) {
            for (int j=0; j<line.length(); j++) {
                board[i][j+2] = line[j];
            }
        } else {
            for (int j=0; j<line.length(); j++) {
                board[i][j] = line[j];
            }
        }
    }

    int ans = 0;
    for (int i=0; i<7; i++) {
        for (int j=0; j<7; j++) {
            // can jump
            if (board[i][j] == '.') {
                // right
                if (j >= 2 && board[i][j-1] == 'o' && board[i][j-2] == 'o') {
                    ans++;
                }
                // down
                if (i >= 2 && board[i-1][j] == 'o' && board[i-2][j] == 'o') {
                    ans++;
                }
                // left
                if (j <= 4 && board[i][j+1] == 'o' && board[i][j+2] == 'o') {
                    ans++;
                }
                // up
                if (i <= 4 && board[i+1][j] == 'o' && board[i+2][j] == 'o') {
                    ans++;
                }
            }
        }
    }

    std::cout << ans;
}