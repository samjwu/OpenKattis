#include <cmath>
#include <iostream>

int main() {
    int m;
    int t;

    double total = 0;
    double count = 0;

    std::cin >> m;

    for (int i = 0; i < m; i++) {
        std::cin >> t;
        total += t;
        count += 1;
    }

    std::cout << std::floor(total/count);
}
