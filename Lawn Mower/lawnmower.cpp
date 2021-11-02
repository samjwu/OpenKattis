#include <algorithm>
#include <iostream>
#include <vector>

bool hasCoverage(std::vector<double>& v, double w) {
    for (int i=0; i<v.size()-1; i++) {
        if (v[i+1] - v[i] > w) {
            return false;
        }
    }

    return true;
}

int main() {
    int x, y;
    double w, pass;

    while (std::cin >> x >> y >> w) {
        if (x == 0 && y == 0 && w == 0) {
            break;
        }

        std::vector<double> width, length;

        for (int i=0; i<x; i++) {
            std::cin >> pass;
            width.push_back(pass);
        }

        for (int i=0; i<y; i++) {
            std::cin >> pass;
            length.push_back(pass);
        }

        std::sort(width.begin(), width.end());
        std::sort(length.begin(), length.end());

        bool lengthCovered = false, widthCovered = false;
        if (width[0] <= w/2 && hasCoverage(width, w) && width[x-1] >= 75 - w/2) {
            lengthCovered = true;
        }
        if (length[0] <= w/2 && hasCoverage(length, w) && length[y-1] >= 100 - w/2) {
            widthCovered = true;
        }

        if (lengthCovered && widthCovered) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}