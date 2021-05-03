#include <cmath>
#include <iostream>

int main() {
    int cases;
    double n, l, d, g;
    std::cin >> cases;

    // total area = polygon area + circle (radius = d*g) + polygon edge extrusions area
    for (int i=0; i<cases; i++) {
        std::cin >> n >> l >> d >> g;

        // polygon area = n * l² * cot(π/n) / 4
        double poly = n * (l*l) / std::tan(M_PI / n) / 4;

        double circle = M_PI * (d*g)*(d*g);

        double extrusions = n * l * (d*g);
    
        std::cout.precision(12);
        std::cout << poly + circle + extrusions << std::endl;
    }

    return 0;
}