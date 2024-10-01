#include <iostream>

int main() {
    int y;

    std::cin >> y;

    if (y <= 2020) {
        std::cout << 1000;
    } else {
        std::cout << 1000 + (y - 2020) * 100;
    }
}
