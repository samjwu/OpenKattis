#include <iostream>

int main() {
    int n, s, d;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> s >> d;

        int diff = s-d;

        if (d > s || (diff % 2) == 1) {
            std::cout << "impossible" << std::endl;
        } else {
            std::cout << diff/2 + d << " " << diff/2 << std::endl;
        }
    }
}