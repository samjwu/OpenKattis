#include <iostream>

int main() {
    int n;
    int m;
    double x, y, x0, y0, prevX, prevY;

    std::cin >> n;

    for (int i=0; i<n; i++) {
        double ans = 0;

        std::cin >> m;
        
        for (int j=0; j<m; j++) {
            std::cin >> x >> y;

            if (j == 0) {
                x0 = x;
                y0 = y;
            } else {
                // polygon with m points is made up of m-2 triangles
                // cross product of 2 vectors yields area of parallelogram
                // thus cross product of 2 points divided by 2 is area of 1 triangle in the polygon
                ans += (prevX * y - prevY * x)/2; 
            }

            prevX = x;
            prevY = y;
        }

        ans += (x * y0 - y * x0)/2;

        std::cout << ans << std::endl;
    }
}