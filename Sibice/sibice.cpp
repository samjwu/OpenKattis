#include <cmath>
#include <iostream>

int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    int maxSize = std::floor(std::sqrt(w*w + h*h));

    int m;
    for (int i=0; i<n; i++) {
        std::cin >> m;
        if (m <= maxSize) {
            std::cout << "DA" << std::endl;
        } else {
            std::cout << "NE" << std::endl;
        }
    }

    return 0;
}