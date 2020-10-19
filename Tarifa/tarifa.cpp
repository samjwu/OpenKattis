#include <iostream>

int main() {
    int x, n, p;
    std::cin >> x >> n;

    int ans = x * (n+1);
    for (int i=0; i<n; i++) {
        std::cin >> p;
        ans -= p;
    }

    std::cout << ans << std::endl;
    
    return 0;
}