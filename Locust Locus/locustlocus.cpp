#include <climits>
#include <cmath>
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int n;
    std::cin >> n;

    int y, c1, c2;
    int earliest = INT_MAX;
    for (int i=0; i<n; i++) {
        std::cin >> y >> c1 >> c2;
        int cd = gcd(c1, c2);
        int nextAppearance = (c1/cd)*(c2/cd)*cd + y;
        earliest = std::min(earliest, nextAppearance);
    }

    std::cout << earliest;
}