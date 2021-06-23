#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <vector>

int main() {
    int n, m;
    std::string food;
    std::map<std::string, int> freq;
    std::vector<std::string> common;

    std::cin >> n >> m;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cin >> food;
            freq[food]++;
        }
    }

    for (std::pair<std::string, int> p: freq) {
        if (p.second == n) {
            common.push_back(p.first);
        }
    }

    std::cout << common.size() << std::endl;
    for (std::string item: common) {
        std::cout << item << std::endl;
    }
}