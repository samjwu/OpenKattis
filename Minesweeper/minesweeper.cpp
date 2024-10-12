#include <iostream>
#include <vector>

int main() {
    int n, m, k;

    std::cin >> n >> m >> k;

    int x, y;
    std::vector<std::vector<char>>grid(n, std::vector<char>(m, '.'));

    for (int i = 0; i < k; i++) {
        std::cin >> x >> y;
        grid[x-1][y-1] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << grid[i][j];
        }
        std::cout << std::endl;
    }
}
