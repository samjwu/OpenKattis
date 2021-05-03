#include <iostream>

int main() {
    int n, l, ans = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> l;
        ans += l;
    }

    std::cout << ans-n+1 << std::endl;

    return 0;
}