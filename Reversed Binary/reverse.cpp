#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int reverse = 0;
    while (n > 0) {
        reverse *= 2;
        reverse += n % 2;
        n /= 2;
    }
    
    std::cout << reverse << std::endl;

    return 0;
}