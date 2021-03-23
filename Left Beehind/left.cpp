#include <iostream>

int main() {
    int x, y;
    while (std::cin >> x >> y && !(x == 0 && y == 0)) {
        if (x + y == 13) {
            std::cout << "Never speak again." << std::endl;
        } else if (x == y) {
            std::cout << "Undecided." << std::endl;
        } else if (x < y) {
            std::cout << "Left beehind." << std::endl;
        } else {
            std::cout << "To the convention." << std::endl;
        }
    }
     
    return 0;
}