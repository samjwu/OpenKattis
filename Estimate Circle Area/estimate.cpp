#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double r, m, c;

    while (std::cin >> r >> m >> c) {
        if (r == 0 && m == 0 && c == 0) {
            break;
        }

        double area = M_PI * r * r;
        double ratio = (c / m) * 4 * (r * r);
        std::cout << std::setprecision(6) << std::fixed;
        std::cout << area << " " << ratio << std::endl;
    }

    return 0;
}