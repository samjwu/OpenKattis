#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 7 == 0) {
        std::cout << n;
    } else {
        std::cout << n+1;
    }
}
