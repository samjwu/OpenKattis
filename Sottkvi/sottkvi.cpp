#include <iostream>

int main() {
    int n, k, d;

    std::cin >> n >> k >> d;

    int birthday = k + d;

    int ans = 0;

    int day;

    for (int i = 0; i < n; i++) {
        std::cin >> day;

        if (day + 14 <= birthday) {
            ans += 1;
        }
    }

    std::cout << ans;
}
