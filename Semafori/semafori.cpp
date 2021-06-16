#include <iostream>

int main() {
    int n, l;
    int d, r, g;
    int ans = 0;
    int curr = 0;
    std::cin >> n >> l;

    for (int i=0; i<n; i++) {
        std::cin >> d >> r >> g;
        
        ans += d - curr;
        curr = d;

        int cycle = r + g;
        int rem = ans % cycle;
        if (rem < r) {
            ans += r - rem;
        }
    }

    ans += l - curr;
    std::cout << ans;
}