#include <cmath>
#include <iostream>

int main() {
    double n;
    std::cin >> n;

    if (n <= 3) {
        std::cout << n;
        return 0;
    }

    std::cout << std::ceil(std::log2(n)) + 1;
}