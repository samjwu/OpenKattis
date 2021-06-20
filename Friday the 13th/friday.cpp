#include <iostream>

int main() {
    int t, m, d, di;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        int ans = 0;
        int day = 0;
        std::cin >> d >> m;

        for (int j=0; j<m; j++) {
            std::cin >> di;
            if (di >= 13 && (day + 13) % 7 == 6) {
                ans++;
            }
            day = (day + di) % 7;
        }

        std::cout << ans << std::endl;
    }
}