#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double r;
    std::cin >> r;

    std::cout << std::fixed << std::setprecision(6);

    std::cout << M_PI * r * r << std::endl;
    std::cout << 2 * r * r << std::endl; 

    return 0;
}