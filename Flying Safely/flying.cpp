#include <iostream>

int main() {
    int t, n, m, a, b;

    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n >> m;
        for (int j=0; j<m; j++) {
            std::cin >> a >> b;
        }
        std::cout << n-1 << std::endl;
    }
}