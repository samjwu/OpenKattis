#include <algorithm>
#include <climits>
#include <iostream>

int main() {
    int n;
    long long a;
    long long hi = LLONG_MIN;
    long long lo = LLONG_MAX;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        hi = std::max(hi, a);
        lo = std::min(lo, a);
    }

    std::cout << hi << ' ' << lo;
}
