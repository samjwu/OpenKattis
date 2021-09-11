#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int neighbor(std::vector<std::vector<char>>& grid, int i, int j) {
    int a = grid.size() - 1;
    int b = grid[0].size() - 1;
    int ans = 0;

    for (int x=std::max(i-1, 0); x<=std::min(i+1, a); x++) {
        for (int y=std::max(j-1, 0); y<=std::min(j+1, b); y++) {
            if (grid[x][y] == 'o') {
                ans++;
            }
        }
    }

    return ans - 1;
}

int main() {
    int r, s;
    std::cin >> r >> s;
    std::vector<std::vector<char>> grid(r, std::vector<char>(s));
    std::string line;

    for (int i=0; i<r; i++) {
        std::cin >> line;
        for (int j=0; j<s; j++) {
            grid[i][j] = line[j];
        }
    }

    std::vector<std::vector<int>> shakes(r, std::vector<int>(s));
    for (int i=0; i<r; i++) {
        for (int j=0; j<s; j++) {
            shakes[i][j] = neighbor(grid, i, j);
        }
    }

    int best = -1;
    std::vector<int> mirko = {-1, -1};
    for (int i=0; i<r; i++) {
        for (int j=0; j<s; j++) {
            if (grid[i][j] == '.' && shakes[i][j] > best) {
                best = shakes[i][j];
                mirko = {i, j};
            }
        }
    }

    if (best != -1) {
        grid[mirko[0]][mirko[1]] = 'o';

        for (int i=0; i<r; i++) {
            for (int j=0; j<s; j++) {
                shakes[i][j] = neighbor(grid, i, j);
            }
        }
    }

    int ans = 0;
    for (int i=0; i<r; i++) {
        for (int j=0; j<s; j++) {
            if (grid[i][j] == 'o') {
                ans += shakes[i][j];
            }
        }
    }

    std::cout << ans / 2;
}