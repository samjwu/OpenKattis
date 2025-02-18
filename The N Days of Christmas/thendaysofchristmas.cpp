#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int total = 0, gifts;

    for (int i = 1; i <= n; i++) {
        gifts = i * (i+1) / 2;
        total += gifts;
    }

    std::cout << gifts << std::endl;
    std::cout << total << std::endl;
}
