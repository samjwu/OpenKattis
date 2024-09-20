#include <algorithm>
#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int lowest = std::min(std::min(a, b), c);

    if (a == lowest) {
        std::cout << "Monnei";
    } else if (b == lowest) {
        std::cout << "Fjee";
    } else {
        std::cout << "Dolladollabilljoll";
    }
}
