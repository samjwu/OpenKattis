#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    double s = (a + b + c + d) / 2.0;
    double ans = std::sqrt((s-a) * (s-b) * (s-c) *(s-d));

    std::cout << std::setprecision(15) << std::fixed << ans << std::endl;

    return 0;
}