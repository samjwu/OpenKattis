#include <iostream>

int main() {
    int n;
    std::cin >> n;

    n -= (n % 10000);

    if (n == 5550000) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}