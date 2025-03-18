#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    if (n <= k) {
        std::cout << "impossible";
        return 0;
    }

    for (int i = 0; i < k; i++) {
        std::cout << "open " << i+1 << " using " << n << std::endl;
    }
}
