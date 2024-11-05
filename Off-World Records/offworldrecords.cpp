#include <iostream>

int main() {
    int n, c, p;

    std::cin >> n >> c >> p;

    int ans = 0;
    int jump;

    for (int i = 0; i < n; i++) {
        std::cin >> jump;

        if (jump > c + p) {
            p = c;
            c = jump;
            ans += 1;
        }
    }

    std::cout << ans;
}
