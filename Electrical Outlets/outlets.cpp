#include <iostream>
#include <sstream>
#include <string>

int main() {
    int n, k, outlets, ans = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        ans = 0;
        std::cin >> k;
        for (int j=0; j<k; j++) {
            std::cin >> outlets;
            ans += outlets - 1;
        }
        std::cout << ans + 1 << std::endl;
    }

    return 0;
}