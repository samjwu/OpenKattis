#include <iomanip>
#include <iostream>

int main() {
    double v, a, t;

    std::cin >> v >> a >> t;

    std::cout << std::fixed << std::setprecision(5) << v * t + a * t * t / 2;
}
