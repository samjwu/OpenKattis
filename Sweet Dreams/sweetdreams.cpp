#include <cmath>
#include <iostream>

int main() {
    int x, y, n, a, b;
    std::cin >> x >> y >> n;

    bool safe = true;

    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b;

        int dx = std::abs(x - a);
        int dy = std::abs(y - b);
        int sqDist = dx*dx + dy*dy;

        if (sqDist <= 64) {
            safe = false;
        }
    }

    if (safe) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
