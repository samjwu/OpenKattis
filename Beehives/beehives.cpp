#include <cmath>
#include <iostream>
#include <vector>

double sqDist(std::vector<std::vector<double>>& bees, int i, int j) {
    return std::pow(std::abs(bees[i][0] - bees[j][0]), 2) + std::pow(std::abs(bees[i][1] - bees[j][1]), 2);
}

int main() {
    double d, x, y;
    int n;
    
    while (std::cin >> d >> n) {
        if (d == 0 && n == 0) {
            break;
        }

        int a = 0, b = 0;
        std::vector<std::vector<double>> bees(n);
        std::vector<bool> sour(n, false);

        for (int i=0; i<n; i++) {
            std::cin >> x >> y;
            bees[i] = {x, y};
        }

        for (int i=0; i<n; i++) {
            if (sour[i]) {
                continue;
            }

            for (int j=0; j<n; j++) {
                if (i != j && sqDist(bees, i, j) <= d*d) {
                    sour[i] = true;
                    sour[j] = true;
                }
            }
        }

        for (bool s: sour) {
            if (s) {
                a++;
            }
        }
        b = n - a;

        std::cout << a << " sour, " << b << " sweet" << std::endl;
    }
}