#include <algorithm>
#include <climits>
#include <iostream>

int main() {
    int n, x;
    int caseNum = 0;

    while (std::cin >> n) {
        caseNum++;
        int minX = INT_MAX;
        int maxX = INT_MIN;

        for (int i=0; i<n; i++) {
            std::cin >> x;
            minX = std::min(minX, x);
            maxX = std::max(maxX, x);
        }

        std::cout << "Case " << caseNum << ": " << minX << " " << maxX << " " << maxX - minX << std::endl;
    }
}