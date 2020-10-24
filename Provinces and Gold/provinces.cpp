#include <cmath>
#include <iostream>
#include <string>

int main() {
    int g, s, c;
    std::cin >> g >> s >> c;

    int money = 3*g + 2*s + c;

    if (money >= 8) {
        std::cout << "Province or Gold" << std::endl;
    } else if (money >= 6) {
        std::cout << "Duchy or Gold" << std::endl;
    } else if (money >= 5) {
        std::cout << "Duchy or Silver" << std::endl;
    } else if (money >= 3) {
        std::cout << "Estate or Silver" << std::endl;
    } else if (money >= 2) {
        std::cout << "Estate or Copper" << std::endl;
    } else {
        std::cout << "Copper" << std::endl;
    }

    return 0;
}