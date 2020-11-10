#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double n;
    std::cin >> n;
    double ans = std::pow(n, 1/n);
    std::cout << std::setprecision(6) << std::fixed << ans << std::endl;
    return 0;
}