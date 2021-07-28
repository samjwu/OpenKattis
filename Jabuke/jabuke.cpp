#include <cmath>
#include <cstdio>
#include <iostream>

double triangleArea(double xa, double ya, double xb, double yb, double xc, double yc) {
    return 0.5 * std::abs(xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb));
}

int main() {
    double xa, ya, xb, yb, xc, yc, n, tx, ty;

    std::cin >> xa >> ya;
    std::cin >> xb >> yb;
    std::cin >> xc >> yc;
    std::cin >> n;

    double originalTriangleArea = triangleArea(xa, ya, xb, yb, xc, yc);
    int inside = n;

    for (int i=0; i<n; i++) {
        std::cin >> tx >> ty;

        double triangleArea1 = triangleArea(tx, ty, xa, ya, xb, yb);
        double triangleArea2 = triangleArea(tx, ty, xb, yb, xc, yc);
        double triangleArea3 = triangleArea(tx, ty, xa, ya, xc, yc);

        if (originalTriangleArea < triangleArea1 + triangleArea2 + triangleArea3) {
            inside--;
        }
    }

    std::printf("%.1f\n", originalTriangleArea);
    std::cout << inside << std::endl;
}