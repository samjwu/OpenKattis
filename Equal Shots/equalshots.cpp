#include <cmath>
#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    double v, c;
    double totalVolA = 0, totalVolB = 0;
    double totalAlcoholA = 0, totalAlcoholB = 0;

    for (int i = 0; i < a; i++) {
        std::cin >> v >> c;
        totalVolA += v;
        totalAlcoholA += v*c;
    }

    for (int i = 0; i < b; i++) {
        std::cin >> v >> c;
        totalVolB += v;
        totalAlcoholB += v*c;
    }

    if (std::abs(totalAlcoholA / totalVolA - totalAlcoholB / totalVolB) < 10e-3) {
        std::cout << "same";
    } else {
        std::cout << "different";
    }
}
