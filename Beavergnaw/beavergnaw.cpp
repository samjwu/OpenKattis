#include <cmath>
#include <iostream>
#include <string>

int main() {
    double d, v;
    std::cin >> d;
    std::cin >> v;
    
    double ans;
    std::cout.precision(12);
    while (d != 0 && v != 0) {
        ans = std::pow( ((pow(d, 3) * M_PI / 6) - v) / (M_PI / 6), 1.0/3.0 );

        std::cout << ans << std::endl;

        std::cin >> d;
        std::cin >> v;
    }
    
    return 0;
}