#include <iostream>

int main() {
    int p, k, b;
    unsigned int n;
    std::cin >> p;

    for (int i=0; i<p; i++) {
        std::cin >> k >> b >> n;
        int ans = 0;
        while (n>0) {
            ans += (n % b) * (n % b);
            n /= b;
        }
        std::cout << k << " " << ans << std::endl;
    } 
    
    return 0;
}