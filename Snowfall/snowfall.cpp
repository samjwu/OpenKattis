#include <iostream>

int main() {
    int n, t, a, snow = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> t >> a;
        
        if (t == 0) {
            snow += a;
        } else {
            snow = std::max(0, snow - a);
        }
    }

    std::cout << snow;
}
