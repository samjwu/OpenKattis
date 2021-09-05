#include <iostream>

int main() {
    int n, k, prev = -1, ans = 1;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> k;
        if (prev > k) {
            ans++;
        }
        prev = k;
    }

    std::cout << ans;
}