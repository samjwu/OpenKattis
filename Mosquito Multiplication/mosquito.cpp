#include <iostream>

int main() {
    int m, p, l, e, r, s, n;
    
    while (std::cin >> m >> p >> l >> e >> r >> s >> n) {
        for (int i=0; i<n; i++) {
            int eggs = m * e;
            int hatch = l / r;
            int transform = p / s;

            m = transform;
            p = hatch;
            l = eggs;
        }

        std::cout << m << std::endl;
    }
}