#include <cstdio>
#include <cmath>
#include <iostream>

/**
 * h [distance from origin to point] = sqrt(x^2 + y^2)
 * b/2 [half of chord length] = sqrt(r^2 - h^2)
 * Angle of sector / 2 [half of sector angle] = arccos(h/r)
 * 
 * Area of circle = pi * r^2
 * Area of sector = (angle / 2) * r^2
 * Area of triangle = b*h / 2;
 * Area of chord = area of sector - area of triangle
 */
int main() {
    double r, x, y;

    while (std::cin >> r >> x >> y) {
        double h = std::sqrt(x*x + y*y);
        if (h > r) {
            std::cout << "miss" << std::endl;
            continue;
        }

        double b = 2 * std::sqrt(r*r - h*h);
        double angle = 2 * std::acos(h/r);

        double areaCircle = M_PI * r*r;
        double areaSector = angle / 2 * r*r;
        double areaTriangle = b*h / 2;
        double areaChord = areaSector - areaTriangle;

        std::printf("%.6f %.6f\n", areaCircle - areaChord, areaChord);
    }
}