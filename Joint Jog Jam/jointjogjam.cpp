#include <cmath>
#include <iostream>

int main() {
    double kx1, ky1, ox1, oy1, kx2, ky2, ox2, oy2;
    std::cin >> kx1 >> ky1 >> ox1 >> oy1 >> kx2 >> ky2 >> ox2 >> oy2;

    double start = std::pow((kx1-ox1), 2) + std::pow((ky1 - oy1), 2);
    double end = std::pow((kx2-ox2), 2) + std::pow((ky2 - oy2), 2);

    std::cout.precision(10);
    if (start > end) {
        std::cout << std::sqrt(start);
    } else {
        std::cout << std::sqrt(end);
    }
}