#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        std::cout << 2;
    } else if (discriminant == 0) {
        std::cout << 1;
    } else {
        std::cout << 0;
    }
}
