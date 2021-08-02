#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n <= 3) {
        std::cout << 1;
    } else {
        std::cout << n-2;
    } 
}