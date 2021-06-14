#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::string line;
    std::vector<std::string> board;
    bool valid = true;

    for (int i=0; i<n; i++) {
        std::cin >> line;
        board.push_back(line);
    }

    int blackRow, blackCol;
    int consecRow, consecCol;
    
    for (int i=0; i<n; i++) {
        blackRow = 0;
        consecRow = 0;

        for (int j=0; j<n; j++) {
            if (board[i][j] == 'B') {
                blackRow++;
                consecRow++;
            } else {
                consecRow = 0;
            }

            if (consecRow >= 3) {
                valid = false;
            }
        }

        if (blackRow != n/2) {
            valid = false;
        }
    }

    for (int j=0; j<n; j++) {  
        blackCol = 0;
        consecCol = 0;

        for (int i=0; i<n; i++) {
            if (board[i][j] == 'B') {
                blackCol++;
                consecCol++;
            } else {
                consecCol = 0;
            }

            if (consecCol >= 3) {
                valid = false;
            }
        }

        if (blackCol != n/2) {
            valid = false;
        }
    }

    std::cout << valid;
}