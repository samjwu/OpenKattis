#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int t;
    std::vector<int> temps;
    int bestD;
    int bestT = INT_MAX;

    for (int i=1; i<=n; i++) {
        std::cin >> t;
        temps.push_back(t);

        if (i >= 3) {
            int hikeT = std::max(temps[i-1], temps[i-3]);
            if (hikeT < bestT) {
                bestD = i-2;
                bestT = hikeT;
            }
        }
    }

    std::cout << bestD << " " << bestT;
}