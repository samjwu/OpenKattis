#include <iostream>

int main() {
    int w, p;
    std::cin >> w >> p;

    if (2 * 180 * p >= w) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
