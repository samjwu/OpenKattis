#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int n, d;
    std::cin >> n;

    std::vector<int> dists;
    for (int i=0; i<n; i++) {
        std::cin >> d;
        dists.push_back(d);
    }

    // for each start point, there are exactly 2 solitary distances
    // these distances are from start to 2nd location, and from 2nd last to the last location
    int minDist = 20001;
    for (int i=0; i<n; i++) {
        minDist = std::min(minDist, dists[i] + dists[(i+2) % n]);
    }

    std::cout << minDist;
}