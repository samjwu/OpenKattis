#include <cstdio>
#include <iostream>

int main() {
    double x, y;
    std::cin >> x >> y;

    if (y == 1) {
        if (x == 0) {
            std::cout << "ALL GOOD";
        } else {
            std::cout << "IMPOSSIBLE";
        }
        return 0;
    }

    double delta = x / (y-1);
    std::printf("%.6f", -delta);
}