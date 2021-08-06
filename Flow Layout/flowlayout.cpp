#include <cmath>
#include <iostream>

int main() {
    int m;
    int x, y;
    std::cin >> m;

    while (true) {
        if (m == 0) {
            break;
        }

        int currX = 0;
        int currMaxX = 0, currMaxY = 0;
        int height = 0;

        while (true) {
            std::cin >> x >> y;
            
            if (x == -1 && y == -1) {
                break;
            }

            if (currX + x > m) {
                currX = 0;
                height += currMaxY;
                currMaxY = 0;
            }

            currX += x;
            currMaxX = std::max(currMaxX, currX);
            currMaxY = std::max(currMaxY, y);
        }

        std::cout << currMaxX << " x " << height + currMaxY << std::endl;
        std::cin >> m;
    }
}