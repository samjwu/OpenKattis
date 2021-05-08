#include <cmath>
#include <iostream>

/**
 * volume formula
 * V = h(x-2h)(y-2h)
 * 
 * partial derivative of volume
 * dV/dh = 12h^2 -4(x+y)h + xy
 * 
 * quadratic formula to determine roots/critical points
 * h = (4(x+y) +- sqrt(16x^2 - 16xy + 16y^2)) / 2*12
 * */
double calcVolume(double x, double y) {
    double h1 = (x+y + std::sqrt(x*x - x*y + y*y)) / 6.0;
    double h2 = (x+y - std::sqrt(x*x - x*y + y*y)) / 6.0;
    double v;

    if (h1 < 0) {
        v = h2 * (x - 2*h2) * (y - 2*h2);
    } else if (h2 < 0) {
        v = h1 * (x - 2*h1) * (y - 2*h1);
    } else {
        v = std::fmax(h1 * (x - 2*h1) * (y - 2*h1), h2 * (x - 2*h2) * (y - 2*h2));
    }

    return v;
}

int main() {
    int t;
    double x, y, v;
    std::cin >> t;
    std::cout.precision(12);

    for (int i=0; i<t; i++) {
        std::cin >> x >> y;
        std::cout << calcVolume(x, y) << std::endl;
    }

    return 0;
}