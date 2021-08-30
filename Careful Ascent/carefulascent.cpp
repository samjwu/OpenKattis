#include <iomanip>
#include <iostream>

int main() {
    double x, y, n;
    std::cin >> x >> y >> n;
    double l, u, f, sum = 0;

    while (n > 0) {
        std::cin >> l >> u >> f;
        sum += (u - l) * f;
        y -= (u - l);
        n--;
    }

    // x_speed = dx / dy = x / (modified y + unmodified y)
    std::cout << std::setprecision(10) << x / (sum + y) << std::endl;
}