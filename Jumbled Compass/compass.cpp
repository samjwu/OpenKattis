#include <iostream>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    int cw, ccw;
    if (n1 > n2) {
        cw = (360 - n1) + n2;
        ccw = n1 - n2;
    } else {
        cw = n2 - n1;
        ccw = (360 - n2) + n1;
    }

    if (cw <= ccw) {
        std::cout << cw;
    } else {
        std::cout << -ccw;
    }
}