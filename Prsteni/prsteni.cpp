#include <cmath>
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    int n;
    std::cin >> n;

    int r1, r2;
    std::cin >> r1;

    for (int i=1; i<n; i++) {
        std::cin >> r2;
        int cd = gcd(r1, r2);
        std::cout << r1/cd << '/' << r2/cd << std::endl;
    }

    return 0;
}