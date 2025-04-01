#include <cmath>
#include <iostream>

int main() {
    int c, k;
    std::cin >> c >> k;

    int bills = 1;
    for (int i = 0; i < k; ++i) {
        bills *= 10;
    }
    int ans = round(static_cast<double>(c) / bills) * bills;

    std::cout << ans << std::endl;

    return 0;
}
