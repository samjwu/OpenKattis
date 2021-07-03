#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 1) {
        std::cout << "Either";
    } else if (n % 4 == 0) {
        std::cout << "Even";
    } else {
        std::cout << "Odd";
    }
}