#include <cmath>
#include <iostream>

int main() {
    int t;
    double n;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        std::cout << (int) std::ceil(n / 400) << std::endl;
    }

    return 0;
}