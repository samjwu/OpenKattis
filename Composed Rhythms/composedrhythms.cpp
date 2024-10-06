#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int k = (n / 2);
    
    std::cout << k << std::endl;

    if (n % 2) {
        std::cout << 3 << " ";

        for (int i = 0; i < k-1; i++) {
            std::cout << 2 << " ";
        }
    } else {
        for (int i = 0; i < k; i++) {
            std::cout << 2 << " ";
        }
    }
}
