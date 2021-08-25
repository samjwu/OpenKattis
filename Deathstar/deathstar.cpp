#include <iostream>
#include <vector>

int main() {
    int n, a;
    std::cin >> n;
    std::vector<int> m(n, 0);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            std::cin >> a;
            m[i] |= a;
        }
    }

    for (int i=0; i<n; i++) {
        std::cout << m[i] << ' ';
    }
}