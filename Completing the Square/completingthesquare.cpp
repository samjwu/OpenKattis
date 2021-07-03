#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

double getSquareDist(std::vector<double>& p1, std::vector<double>& p2) {
    return std::pow(p1[0] - p2[0], 2) + std::pow(p1[1] - p2[1], 2);
}

int main() {
    std::vector<std::vector<double>> points;
    double x, y;

    for (int i=0; i<3; i++) {
        std::cin >> x >> y;
        points.push_back({x, y});
    }

    int d1 = getSquareDist(points[0], points[1]);
    int d2 = getSquareDist(points[0], points[2]);
    int d3 = getSquareDist(points[1], points[2]);

    std::vector<double> opposite, adj1, adj2;

    if (d1 == d2) {
        opposite = points[0];
        adj1 = points[1];
        adj2 = points[2];
    } else if (d2 == d3) {
        opposite = points[2];   
        adj1 = points[0];
        adj2 = points[1];
    } else { // d1 == d3
        opposite = points[1];
        adj1 = points[0];
        adj2 = points[2];
    }
    
    int ansX = adj2[0] + (adj1[0] - opposite[0]);
    int ansY = adj2[1] + (adj1[1] - opposite[1]);
    std::cout << ansX << " " << ansY << std::endl;
}