#include <cmath>
#include <iostream>

int main() {
    double x, y, x1, y1, x2, y2;
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    double dx;
    if (x >= x1 && x <= x2) {
        dx = 0;
    } else {
        dx = std::min(abs(x - x1), abs(x - x2));
    }

    double dy;
    if (y >= y1 && y <= y2) {
        dy = 0;
    } else {
        dy = std::min(abs(y - y1), abs(y - y2));
    }
    
    double dist = std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));

    std::cout << dist << std::endl;

    return 0;
}