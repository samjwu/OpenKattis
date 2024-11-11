#include <algorithm>
#include <climits>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int p;
    int hi = -1;
    int lo = INT_MAX;
    for (int i = 0; i < n; i++) {
        std::cin >> p;
        hi = std::max(hi, p);
        lo = std::min(lo, p);
    }

    std::cout << std::max(0, lo - hi/2);
}
