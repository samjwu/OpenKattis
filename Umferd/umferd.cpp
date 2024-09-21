#include <iomanip>
#include <iostream>
#include <string>

int main() {
    int m, n;

    std::cin >> m >> n;

    std::string s;

    int empty = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        for (int j = 0; j < m; j++) {
            if (s[j] == '.') {
                empty += 1;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(5) << (double)empty / (m*n);
}
