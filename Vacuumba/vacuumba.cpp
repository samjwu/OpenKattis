#include <cmath>
#include <iostream>

int main() {
    int n, m;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> m;
        double currAngle = 90;
        double currX = 0;
        double currY = 0;

        for (int j=0; j<m; j++) {
            double angle, dist;
            std::cin >> angle >> dist;

            currAngle += angle;
            double dx = dist * std::cos(currAngle * M_PI / 180);
            double dy = dist * std::sin(currAngle * M_PI / 180);
            currX += dx;
            currY += dy;
        }

        std::cout << currX << " " << currY << std::endl;
    }
}