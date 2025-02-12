#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::cout << 45*n << " ml gin" << std::endl;
    std::cout << 30*n << " ml fresh lemon juice" << std::endl;
    std::cout << 10*n << " ml simple syrup" << std::endl;
    std::cout << n;
    if (n > 1) {
        std::cout << " slices of lemon";
    } else {
        std::cout << " slice of lemon";
    }
}
