#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, d;
    std::cin >> n;
    
    std::vector<std::vector<int>> dists(n, std::vector<int>());

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> d;
            dists[j].push_back(d);
        }
    }

    for (int j = 0; j < n; j++) {
        sort(dists[j].begin(), dists[j].end());
        std::cout << dists[j][1] << ' ';
    }
}
