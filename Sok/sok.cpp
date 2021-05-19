#include <cmath>
#include <cstdio>
#include <iostream>

int main() {
    double a, b, c, i, j, k;
    std::cin >> a >> b >> c;
    std::cin >> i >> j >> k;

    double mixes = std::min(a/i, std::min(b/j, c/k));

    double x = a - mixes*i;
    double y = b - mixes*j;
    double z = c - mixes*k;

    std::printf("%.6f %.6f %.6f", fabs(x), fabs(y), fabs(z));
}