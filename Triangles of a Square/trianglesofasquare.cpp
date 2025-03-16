#include <iostream>

bool isDiagonal(int x1, int y1, int x2, int y2) {
    return (x1 == 0 && y1 == 0 && x2 == 2024 && y2 == 2024) ||
        (x2 == 0 && y2 == 0 && x1 == 2024 && y1 == 2024) ||
        (x1 == 0 && y1 == 2024 && x2 == 2024 && y2 == 0) ||
        (x2 == 0 && y2 == 2024 && x1 == 2024 && y1 == 0);
}

bool isCorner(int x, int y) {
    return (x == 0 || x == 2024) && (y == 0 || y == 2024);
}

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (isDiagonal(x1, y1, x2, y2)) {
        std::cout << 0 << std::endl;
    } else if (isCorner(x1, y1) || isCorner(x2, y2)) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 2 << std::endl;
    }
}
