#include <iostream>
#include <vector>

int main() {
    int n, m, pressure;
    std::vector<std::vector<int>> system;
    std::vector<int> v;
    bool hasLow = false;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> pressure;
            v.push_back(pressure);
        }
        system.push_back(v);
        v.clear();
    }

    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < m-1; j++) {
            if (
                system[i][j] < system[i-1][j] &&
                system[i][j] < system[i][j-1] &&
                system[i][j] < system[i+1][j] &&
                system[i][j] < system[i][j+1]
                ) {
                    hasLow = true;
                }
        }
    }

    if (hasLow) {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
