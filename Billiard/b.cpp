#include <cmath>
#include <cstdio>
#include <iostream>

int main() {
    double a, b, s, m, n;
    std::cin >> a >> b >> s >> m >> n;

    while (a!=0 || b!=0 || s!=0 || m!=0 || n!=0) {
        double deg =  atan((b*n)/(a*m)) * 180 / M_PI;
        double velo = sqrt(pow(a*m, 2) + pow(b*n, 2)) / s;

        std::printf("%.2f %.2f\n", deg, velo);
        std::cin >> a >> b >> s >> m >> n;
    }

}