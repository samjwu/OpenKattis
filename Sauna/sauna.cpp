#include <algorithm>
#include <climits>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a, b;
    int lo = INT_MIN, hi = INT_MAX;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        lo = std::max(lo, a);
        hi = std::min(hi, b);
    }

    if (lo > hi) {
        std::cout << "bad news";
    } else {
        std::cout << hi-lo+1 << " " << lo;
    }
}
