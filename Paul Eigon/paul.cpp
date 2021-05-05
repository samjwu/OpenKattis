#include <iostream>

int main() {
    int n, p, q;
    std::cin >> n >> p >> q;

    int quotient = (p+q) / n;

    if (quotient % 2 == 0) {
        std::cout << "paul" << std::endl;
    } else {
        std::cout << "opponent" << std::endl;
    }
    
    return 0;
}