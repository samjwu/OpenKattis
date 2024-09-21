#include <iostream>

int main() {
    int xh, yh, xp, yp;

    std::cin >> xh >> yh >> xp >> yp;

    std::cout << (xh != xp) + (yh != yp);
}
