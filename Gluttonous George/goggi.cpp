#include <iostream>

int main() {
    char c;
    int n, m;
    std::cin >> n >> c >> m;

    if (n > m) {
        std::cout << '>';
    } else if (n < m) {
        std::cout << '<';
    } else {
        std::cout << "Goggi svangur!";
    }

    return 0;
}
