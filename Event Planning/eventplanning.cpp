#include <climits>
#include <cmath>
#include <iostream>

int main() {
    int n, b, h, w;
    std::cin >> n >> b >> h >> w;

    int ans = INT_MAX;

    for (int i=0; i<h; i++) {
        int p;
        std::cin >> p;

        for (int j=0; j<w; j++) {
            int a;
            std::cin >> a;

            if (a >= n) {
                int price = n * p;
                ans = std::min(ans, price);
            }
        }
    }

    if (ans <= b) {
        std::cout << ans;
    } else {
        std::cout << "stay home";
    }
}