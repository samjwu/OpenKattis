#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int g, ans = 0;
    for (int i=0; i<m; i++) {
        std::cin >> g;
        if (g <= n) {
            n -= g;
        } else {
            ans++;
        }
    }
    std::cout << ans;
}