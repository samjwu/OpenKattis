#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int t, s;

    for (int i = 0; i < n; i++) {
        std::cin >> t;

        if (t <= 7) {
            std::cout << 0 << std::endl;
        } else {
            s = 3;
            for (int j = 3; j*j <= 10e9; j += 2) {
                if (t >= j*j - 1) {
                    s = j;
                } else {
                    break;
                }
            }
            std::cout << (s-1)/2 << std::endl;
        }
    }
}
