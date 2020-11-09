#include <iostream>
#include <string>

int main() {
    int x, y;
    std::cin >> x >> y;

    int quadrant = -1;
    if (x > 0 && y > 0) {
        quadrant = 1;
    } else if (x < 0 && y > 0) {
        quadrant = 2;
    } else if (x < 0 && y < 0) {
        quadrant = 3;
    } else if (x > 0 && y < 0) {
        quadrant = 4;
    }

    std::cout << quadrant << std::endl;

    return 0;
}