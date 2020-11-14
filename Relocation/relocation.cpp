#include <cmath>
#include <iostream>

int main() {
    int n, q;
    std::cin >> n >> q;
    int c[n];

    for (int i=0; i<n; i++) {
        std::cin >> c[i];
    }

    int type, a, b;
    for (int i=0; i<q; i++) {
        std::cin >> type >> a >> b;
        if (type == 1) {
            c[a-1] = b;
        } else {
            std::cout << std::abs(c[a-1] - c[b-1]) << std::endl;
        }
    }

    return 0;
}