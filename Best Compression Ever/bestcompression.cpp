#include <iostream>

int main() {
    long long n, b;
    std::cin >> n >> b;

    if (n <= (1LL << (b+1)) - 1) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
}