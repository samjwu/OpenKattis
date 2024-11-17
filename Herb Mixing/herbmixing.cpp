#include <cmath>
#include <iostream>

int main() {
    int green, red;

    std::cin >> green >> red;

    int combo = std::min(green, red);
    green -= combo;

    int triple = green / 3;
    green -= triple*3;

    int double_green = green / 2;
    green -= double_green*2;

    int total = combo*10 + triple*10 + double_green*3 + green;
    std::cout << total;
}
