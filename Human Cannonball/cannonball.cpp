#include <cmath>
#include <iostream>

int main() {
    double n, v, theta, x, h1, h2;
    std::cin >> n;

    double t, y;
    for (int i=0; i<n; i++) {
        std::cin >> v >> theta >> x >> h1 >> h2;
        theta = theta * M_PI / 180;
        t = x / (v * std::cos(theta));
        y = v * t * std::sin(theta) - 0.5 * 9.81 * std::pow(t, 2);
        if (y > h1+1 && y < h2-1) {
            std::cout << "Safe" << std::endl;
        } else {
            std::cout << "Not Safe" << std::endl;
        }
    }
    
    return 0;
}