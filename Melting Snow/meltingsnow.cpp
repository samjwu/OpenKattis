#include <iomanip>
#include <iostream>

int main() {
    double s, p;
    std::cin >> s >> p;

    double r = p / 100;

    std::cout << std::setprecision(6) << std::fixed;
    std::cout << s * (1 - r) / r + s;
}
