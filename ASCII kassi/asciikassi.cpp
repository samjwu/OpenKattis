#include <iostream>
#include <vector>

int main() {
    int n;

    std::cin >> n;

    std::vector<std::vector<char>> grid(n+2, std::vector<char>(n+2, ' '));

    for (int i = 0; i < n+2; i++) {
        grid[0][i] = '-';
        grid[i][0] = '|';
        grid[i][n+1] = '|';
        grid[n+1][i] = '-';
    }

    grid[0][0] = '+';
    grid[n+1][0] = '+';
    grid[0][n+1] = '+';
    grid[n+1][n+1] = '+';

    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < n+2; j++) {
            std::cout << grid[i][j];
        }
        std::cout << std::endl;
    }
}
