#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int x, prev = -1;
    int ans = 0;
    for (int i=0; i<n; i++) {
        std::cin >> x;
        if (x > prev) {
            ans++;
        }
        prev = x;
    }

    std::cout << ans;
}