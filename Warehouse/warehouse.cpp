#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

int main() {
    int t, n, count;
    std::string toy;
    std::map<std::string, int> toyCount;
    std::vector<std::pair<std::string, int>> shipments;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        for (int j=0; j<n; j++) {
            std::cin >> toy >> count;
            toyCount[toy] += count;
        }

        for (std::pair<std::string, int> p: toyCount) {
            shipments.push_back(p);
        }

        std::sort(shipments.begin(), shipments.end(), [](std::pair<std::string, int>& p1, std::pair<std::string, int>& p2) {
            if (p1.second == p2.second) {
                return p1.first < p2.first;
            }
            return p1.second > p2.second;
        });

        std::cout << toyCount.size() << std::endl;
        for (std::pair<std::string, int> p: shipments) {
            std::cout << p.first << " " << p.second << std::endl;
        }

        shipments.clear();
        toyCount.clear();
    }
}