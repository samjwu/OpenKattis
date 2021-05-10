#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Alice" << std::endl;
        std::cout << 1 << std::endl;
    } else {
        std::cout << "Bob" << std::endl;
    }
}