#include <cmath>
#include <iostream>
#include <vector>

bool canReach(int x, int y, int len, std::vector<int>& hatch) {
    double squareDist = std::pow(std::abs(x - hatch[0]), 2) + std::pow(std::abs(y - hatch[1]), 2);
    return squareDist <= std::pow(len, 2);
}

int main() {
    int n, s, h, x, y;
    int xAns, yAns;
    bool hasAns, success;
    std::vector<std::vector<int>> hatches;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> s >> h;
        for (int j=0; j<h; j++) {
            std::cin >> x >> y;
            hatches.push_back({x, y});
        }
        
        // check all possible leash locations
        hasAns = false;
        for (int k=1; k<s && !hasAns; k++) {
            for (int l=1; l<s && !hasAns; l++) {
                // leash must be short enough for dog not to fall
                int leashLen = std::min(std::min(k, s-k), std::min(l, s-l));
                success = true;
                
                for (auto hatch: hatches) {
                    // leash cannot be at a hatch location
                    if (hatch[0] == k && hatch[1] == l) {
                        success = false;
                    }
                    // dog can't reach hatch
                    if (!canReach(k, l, leashLen, hatch)) {
                        success = false;
                    }
                }

                if (success) {
                    hasAns = true;
                    xAns = k;
                    yAns = l;
                }
            }
        }

        if (hasAns) {
            std::cout << xAns << " " << yAns << std::endl;
        } else {
            std::cout << "poodle" << std::endl;
        }

        hatches.clear();
    }
}