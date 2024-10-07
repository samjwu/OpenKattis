#include <iostream>

int main() {
    int n, d, ans = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> d;

        if (d % 2 == 1) {
            ans += 1;
        }
    }

    std::cout << ans;
}
