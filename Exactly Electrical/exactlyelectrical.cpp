#include <cmath>
#include <iostream>

int main() {
    int a, b, c, d, t;
    std::cin >> a >> b >> c >> d >> t;

    int dist = std::abs(a-c) + std::abs(b-d);
    int remain = t - dist;

    if (remain >= 0 && remain % 2 == 0) {
        std::cout << "Y";
    } else {
        std::cout << "N";
    }
}