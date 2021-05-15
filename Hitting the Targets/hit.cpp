#include <cmath>
#include <iostream>
#include <string>
#include <vector>

bool hitRectangle(int x, int y, std::vector<int>& rect) {
    if (x >= rect[0] && x <= rect[2] && y >= rect[1] && y <= rect[3]) {
        return true;
    }
    return false;
}

/**
 * (x-a)^2 + (y-b)^2 = r^2
 * where (a,b) is centre of circle
 */
bool hitCircle(int x, int y, std::vector<int>& circ) {
    if ((circ[0] - x) * (circ[0] - x) + (circ[1] - y) * (circ[1] - y) <= circ[2] * circ[2]) {
        return true;
    }
    return false;
}

int main() {
    int m;
    std::cin >> m;
    std::string shape;
    std::vector<std::vector<int>> rects, circs;
    int x1, y1, x2, y2, r;

    for (int i=0; i<m; i++) {
        std::cin >> shape;
        if (shape.compare("rectangle") == 0) {
            std::cin >> x1 >> y1 >> x2 >> y2;
            rects.push_back({x1, y1, x2, y2});
        } else {
            std::cin >> x1 >> y1 >> r;
            circs.push_back({x1, y1, r});
        }
    }

    int n;
    std::cin >> n;
    int x, y;
    int hits;

    for (int i=0; i<n; i++) {
        hits = 0;
        std::cin >> x >> y;

        for (std::vector<int>& rect: rects) {
            if (hitRectangle(x, y, rect)) {
                hits++;
            }
        }

        for (std::vector<int>& circ: circs) {
            if (hitCircle(x, y, circ)) {
                hits++;
            }
        }

        std::cout << hits << std::endl;
    }
    
    return 0;
}