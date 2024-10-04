#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double d, k;

    std::cin >> d >> k;

    double ans = 2 * d * (1 - 1 / std::pow(2, k + 1));
    
    std::cout << std::fixed << std::setprecision(5) << ans;
}
