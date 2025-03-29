#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a <= 2 && b >= 2) {
        std::cout << 1 << std::endl << 2 << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    return 0;
}
