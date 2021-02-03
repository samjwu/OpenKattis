#include <cmath>
#include <iostream>

int main() {
    int n;
    double k;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> k;
        int ans = std::pow(2, k) - 1;
        std::cout << ans << std::endl;
    }

    return 0;
}