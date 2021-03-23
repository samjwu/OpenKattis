#include <iostream>
#include <unordered_set>

int main() {
    int m, n;
    std::cin >> m >> n;

    if (m < 8) {
        std::cout << "unsatisfactory" << std::endl;
    } else {
        std::cout << "satisfactory" << std::endl;
    }
    
    return 0;
}