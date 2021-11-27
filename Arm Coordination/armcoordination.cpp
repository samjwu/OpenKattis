#include <iostream>

int main() {
    int x, y, r;
    std::cin >> x >> y >> r;

    std::cout << x-r << " " << y-r << std::endl;
    std::cout << x-r << " " << y+r << std::endl;
    std::cout << x+r << " " << y+r << std::endl;
    std::cout << x+r << " " << y-r << std::endl;
}