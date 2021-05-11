#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // # of intersecting diagonals of convex polygon = n choose 4
    // reason: any 4 vertices form two diagonals and one intersection 
    std::cout << (n * (n-1) * (n-2) * (n-3)) / (4*3*2*1) << std::endl;
}