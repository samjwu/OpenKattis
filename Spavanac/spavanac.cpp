#include <iostream>

int main() {
    int h, m;
    std::cin >> h;
    std::cin >> m;

    if (m < 45) {
        m += 15;
        if (h == 0) {
            h = 23;
        } else {
            h -= 1;
        }
    } else {
        m -= 45;
    }

    std::cout << h << " " << m << std::endl;
    
    return 0;
}