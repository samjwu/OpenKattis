#include <climits>
#include <cmath>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int r;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        std::cin >> r;
        ans = std::min(ans, r);
    }

    std::cout << ans+1;
}
