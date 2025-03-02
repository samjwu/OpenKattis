#include <iostream>
#include <unordered_set>

int main() {
    int a, b, n, floor;
    std::cin >> a >> b >> n;

    int lo = std::min(a, b);
    int hi = std::max(a, b);
    std::unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        std::cin >> floor;
        if (floor > lo && floor < hi) {
            seen.insert(floor);
        }
    }

    int time = (hi - lo) * 4 + seen.size() * 10;
    std::cout << time;
}
