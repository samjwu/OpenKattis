#include <iostream>

int main() {
    int w, s;
    std::cin >> w >> s;

    int coins = s * (s+1) / 2;
    int tungsten = 29260 * coins;
    std::cout << (w - tungsten) / 110;
}
