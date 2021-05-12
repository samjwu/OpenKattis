#include <cmath>
#include <iostream>

double dist(int x, int y, int prevX, int prevY) {
    return sqrt(pow(abs(x-prevX), 2) + pow(abs(y-prevY), 2));
}

/**
 * Find scaling factor such that len(smooth track) == len(original track)
 * 
 * given
 * len(smooth) = len(original) * scaling factor + circumference of circle with radius r
 * len(smooth) = len(original)
 * 
 * therefore (using RHS of both equations)
 * len(original) = len(original) * scaling factor + circumference of circle with radius r
 * scaling factor = (len(original) - circumference) / len(original)
 */
int main() {
    int t;
    std::cin >> t;

    int r, n;
    int x, y, prevX, prevY, firstX, firstY;
    double trackLen, smoothLen, scalingFactor;

    for (int i=0; i<t; i++) {
        std::cin >> r >> n;

        trackLen = 0;

        for (int j=0; j<n; j++) {
            std::cin >> x >> y;
            if (j == 0) {
                firstX = x;
                firstY = y;
            } else if (j == n-1) {
                trackLen += dist(x, y, prevX, prevY);
                trackLen += dist(x, y, firstX, firstY);
            } else { // 0 < j < n-1
                trackLen += dist(x, y, prevX, prevY);
            }
            prevX = x;
            prevY = y;
        }

        smoothLen = trackLen - M_PI * r * 2;
        scalingFactor = smoothLen / trackLen;

        if (scalingFactor >= 0) {
            std::cout << scalingFactor << std::endl;
        } else {
            std::cout << "Not possible" << std::endl;
        }
    }
}