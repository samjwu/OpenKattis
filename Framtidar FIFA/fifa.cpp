#include <iostream>

int main() {
    int n, k;

    std::cin >> n >> k;

    int change = n / k;

    std::cout << 2022 + change;
}
