#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    if (n == m) {
        std::cout << "Dufur passa fullkomlega";
    } else if (n > m) {
        std::cout << "Dufur passa ekki";
    } else {
        std::cout << "Dufur passa";
    }

    return 0;
}
