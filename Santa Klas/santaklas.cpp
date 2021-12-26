#include <cmath>
#include <iostream>

int main() {
    double h, v;
    std::cin >> h >> v;

    if (v >= 0 && v <= 180) {
        std::cout << "safe";
    } else {
        double radians = (v-180) * M_PI / 180;
        double vertSpeed = std::sin(radians);
        double time = h / vertSpeed;
        std::cout << (int) time;
    }
}