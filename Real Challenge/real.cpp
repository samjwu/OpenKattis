#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a;
    std::cin >> a;

    double ans = 4 * sqrt(a);

    std::cout << std::setprecision(10) << std::fixed << ans << std::endl;

    return 0;
}