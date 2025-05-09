#include <cmath>
#include <iostream>

int main() {
    int d;
    std::cin >> d;
    
    int a, b, h;
    std::cin >> a >> b >> h;
    
    double area1 = M_PI * (d / 2.0) * (d / 2.0);
    
    double area2 = 0.5 * (a + b) * h;
    
    if (area2 > area1) {
        std::cout << "Trapizza!" << std::endl;
    } else if (area1 > area2) {
        std::cout << "Mahjong!" << std::endl;
    } else {
        std::cout << "Jafn storar!" << std::endl;
    }
    
    return 0;
}
