#include <iostream>

int main() {
    int n = 0;
    int e, m;

    while (std::cin >> e >> m) {
        n++;
        int a = 365 - e;
        int b = 687 - m;

        if (a == 365 && b == 687) {
            std::cout << "Case " << n << ": " << 0 << std::endl;
        } else if (a == b) {
            std::cout << "Case " << n << ": " << a << std::endl;
        } else {
            int days = 0;
            while (e != 0 || m != 0) {
                e = (e + 1) % 365;
                m = (m + 1) % 687;
                days++;
            }

            std::cout << "Case " << n << ": " << days << std::endl;
        }
    }
}